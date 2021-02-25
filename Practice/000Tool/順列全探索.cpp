// N 個の都市があります。飛行機を使って、都市 ii から jj へ直接移動するのに Ai,jAi,j 円かかります。Qiita 君は好きな都市から出発し、全ての都市を飛行機で一度ずつ巡りたいです。最小で何円必要ですか。
// 制約：1≤N≤10,1≤Ai,j≤10001≤N≤10,1≤Ai,j≤1000

#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int a[11][11], ans=INF;
int p[11]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int main() {
    int n; cin >> n;
    for(int i=1; i <= n; ++i) for(int j=1; j <= n; ++j) cin >> a[i][j];
    do{
        int tmp=0;
        for(int i=0; i < n-1; ++i) tmp+=a[p[i]][p[i+1]];
        ans=min(ans,tmp);
    }while(next_permutation(p,p+n));
    cout << ans << endl;
}