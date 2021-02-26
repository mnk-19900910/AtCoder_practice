#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int n; cin >> n;
    vector<ll> a(n*3);
    for(int i=0; i < n*3; ++i) cin >> a[i];
    sort(a.begin(),a.end(),greater<ll>());
    ll ans=0;
    for(int i=1,j=0; j < n;i+=2, j++) ans+=a[i];
    cout << ans << endl;
}