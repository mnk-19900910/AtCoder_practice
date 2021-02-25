#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
using pll=pair<ll,ll>;
int main() {
    ll n,m; cin >> n>>m;
    vector<pll> a(n);
    for(int i=0; i < n; ++i) cin>>a[i].first>>a[i].second;
    sort(a.begin(),a.end());
    ll ans=0;
    for(int i=0; i < n&&m>0; ++i){
        ans+=a[i].first*min(m,a[i].second);
        m-=min(m,a[i].second);
    }
    cout << ans << endl;
}