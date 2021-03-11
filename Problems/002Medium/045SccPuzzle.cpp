#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef unsigned long long ll;
int main() {
    ll n,m; cin >> n>>m;
    ll ans=0;
    n*=2;
    ans=min(n,m)/2;
    n-=ans*2;
    m-=ans*2;
    if(m>0) ans+=m/4;
    cout << ans << endl;
}