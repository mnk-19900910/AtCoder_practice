#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    ll n,a,b; cin >> n>>a>>b;
    ll ans;
    if((b-a)%2==0) ans=(b-a)/2;
    else ans=min(a+(b-1-a)/2,n-b+1+(b-1-a)/2);
    cout << ans << endl;
}