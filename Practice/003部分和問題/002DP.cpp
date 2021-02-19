#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i < (n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define N 3 // 配列 num_list の要素数
#define MAX_NUM 10 // MAX_NUM 以内の最大値を求める
int find_max_dp(int num_list[N]) {
    int choice, not_choice;
    int table[N][MAX_NUM+1];
    rep(i,MAX_NUM) cout << "- ";
    cout << endl;
    rep(i,MAX_NUM) cout << i<<" ";
    cout << endl;
    rep(i,MAX_NUM) cout << "- ";
    cout << endl;
    // DP表の一番上（i = 0）を初期化
    for(int j = 0; j <= MAX_NUM; j++) {
        if(num_list[0] > j)table[0][j] = 0; // 何も入れられないとき
        else table[0][j] = num_list[0]; // 0番目の数字を足せるとき
        cout << table[0][j] << " ";
    }
    cout << endl;
    for(int i = 1; i < N; i++) {
        for(int j = 0; j <= MAX_NUM; j++) {
            not_choice = table[i-1][j];
            if(num_list[i] > j) table[i][j] = not_choice;
            else {
                choice = table[i-1][j - num_list[i]] + num_list[i];
                if(choice >= table[i-1][j]) table[i][j] = choice;
                else table[i][j] = not_choice;
            }
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return table[N-1][MAX_NUM];
}
int main() {
    int list[3]={4,5,6};
    int ans = find_max_dp(list);
    printf("%2dに最も近い選び方1：%2d\n",MAX_NUM,ans);
}