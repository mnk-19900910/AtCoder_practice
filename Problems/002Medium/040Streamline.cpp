#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    ll n,m; cin >>n>>m;
    vector<ll> x(m);
    for(int i=0; i < m; ++i) cin >>x[i];
    if(m==1){cout << 0 << endl; return 0;}
    sort(x.begin(),x.end());
    vector<ll> sb(m-1);
    for(int i=0; i < m-1; ++i) sb[i]=x[i+1]-x[i];
    sort(sb.begin(),sb.end());
    ll ans=0;
    for(int i=0; i < m-n; ++i) ans+=sb[i];
    cout << ans << endl;
}