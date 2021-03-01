#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
// 上下左右への隣接マスへの移動を表す配列 0: 下 1: 右 2: 上 3: 左
const int di[4] = {1, 0, -1, 0};
const int dj[4] = {0, 1, 0, -1};
int main() {
    int h,w; cin >> h>>w;
    string a[h];
    for(int i=0; i < h; ++i) cin >> a[i];
    bool can=0;
    for(int i=0; i < h; ++i){
        for(int j=0; j < w; ++j){
            if(a[i][j]=='#'){
                int num=0;
                for(int d=0; d < 4; ++d){
                    /* 隣接マス */
                    int ni=i+di[d];
                    int nj=j+dj[d];
                    /* 隣接マスがフィールドの外にはみ出すなら処理しない (ここは毎回テンプレ) */
                    if(ni<0 || ni>=h || nj<0 || nj>=w)continue;
                    if(a[ni][nj]=='#') num++;
                }
                if(num==0) can=1;
            }
            else continue;
            if(can==1){cout << "No" << endl; return 0;}
        }
    }
    cout << "Yes" << endl;
}