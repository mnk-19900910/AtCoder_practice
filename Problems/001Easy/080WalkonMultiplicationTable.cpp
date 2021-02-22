#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    ll n; cin >> n;
    ll ans=1+n-2;// (a, b) = (1, N)
    for(ll i=1; i*i <= n; ++i){
        if(n%i==0) ans=min(ans,i+(n/i)-2);
    }
    cout << ans << endl;
}