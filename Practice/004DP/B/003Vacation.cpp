#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll a[100010][3];
ll dp[100010][3];
int main() {
    int n; cin >> n;
    for(int i=0; i < n; ++i){
        for(int j=0; j < 3; ++j){
            cin >> a[i][j];
        }
    }

    for(int i=0; i < n; ++i){
        for(int j=0; j < 3; ++j){
            for(int k=0; k < 3; ++k){
                if(j==k) continue; 
                chmax(dp[i+1][k],dp[i][j]+a[i][k]);
            }
        }
    }
    ll ans=0;
    for(int j=0; j < 3; ++j) chmax(ans,dp[n][j]);
    cout << ans << endl;
}