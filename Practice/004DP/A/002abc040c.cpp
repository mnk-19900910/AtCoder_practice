#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int n; cin >> n;
    ll a[200005];
    ll dp[200005];
    rep(i,n) cin >> a[i];
    rep(i,200005) dp[i]=INF;
    dp[0]=0;
    for(int i=1; i < n; i++){
        if(i==1){
            chmin(dp[i], dp[i-1]+abs(a[i]-a[i-1]));
        }else{
            chmin(dp[i], dp[i-1]+abs(a[i]-a[i-1]));
            chmin(dp[i], dp[i-2]+abs(a[i]-a[i-2]));
        }
    }
    cout << dp[n-1] << endl;
}