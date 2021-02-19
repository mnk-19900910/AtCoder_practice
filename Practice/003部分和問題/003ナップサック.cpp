#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i < (n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define N 5 // 配列 num_list の要素数
#define MAX_NUM 30 // MAX_NUM 以内の最大値を求める
int price[N]={120,150,140,110,100};
int kcal[N]={8,10,7,6,7};

int main() {
    int dp[N][MAX_NUM+1];
    for(int j=0; j <= MAX_NUM; j++){
        if(kcal[0]>j) dp[0][j]=0;
        else dp[0][j]=price[0];
    }
    int ok,ng;
    for(int i = 1; i < N; i++){
        for(int j = 0; j <= MAX_NUM; j++){
            ng=dp[i-1][j];
            if(kcal[i]>j) dp[i][j]=ng;
            else{
                ok=dp[i-1][j-kcal[i]]+price[i];
                if(ok>=dp[i-1][j]) dp[i][j]=ok;
                else dp[i][j]=ng;
            }
        }
    }
    int ans=dp[N-1][MAX_NUM];
    cout << MAX_NUM*10<<"kcal以内で食べられる金額の最大は "<<ans<< endl;
}