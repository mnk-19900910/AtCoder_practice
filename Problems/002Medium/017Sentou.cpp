#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    ll n,t; cin >> n>>t;
    ll a0; cin >> a0;
    ll ans=t;
    for(int i=1; i < n; ++i){
        ll a; cin >> a;
        ans+=min(a-a0,t);
        a0=a;
    }
    cout << ans << endl;
}