#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
ll GCD(ll a, ll b) {if(b == 0) return a; else return GCD(b, a % b);}
int main() {
    ll n,r; cin >>n>>r;
    vector<ll> p;
    for(int i=0; i < n; ++i){
        ll x; cin >> x;
        p.push_back(abs(x-r));
    }
    ll ans=p[0];
    for(int i=0; i < n; ++i){
        ans=GCD(ans,p[i]);
    }
    cout << ans << endl;
}