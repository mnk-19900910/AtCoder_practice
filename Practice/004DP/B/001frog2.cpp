#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int n,k; cin >> n>>k;
    ll h[110000];
    ll dp[110000];
    rep(i,n) cin >> h[i];
    rep(i,110000) dp[i]=INF;
    dp[0]=0;
    for(int i=0; i < n; i++){
        for(int j=1; j <= k; j++){
            chmin(dp[i+j], dp[i]+abs(h[i]-h[i+j]));
        }
    }
    cout << dp[n-1] << endl;
}