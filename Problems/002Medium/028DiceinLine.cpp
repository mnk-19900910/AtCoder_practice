#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int n,k; cin >> n>>k;
    vector<ll> a(n);
    rep(i,n){cin >> a[i]; a[i]++;}
    vector<ll> s(n+1,0);
    for(int i=0; i < n; ++i) s[i+1]=s[i]+a[i];
    ll ans=0;
    for(int i=0; i+k <= n; ++i){
        ans=max(ans,s[i+k]-s[i]);
    }
    cout << fixed<<setprecision(10)<<(double)ans/2 << endl;
}