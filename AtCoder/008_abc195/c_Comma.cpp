#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 100100100;
int main() {
    ll n; cin >> n;
    ll ans=0;
    if(n>=1000) ans+=n-999;
    if(n>=1000000) ans+=n-999999;
    if(n>=1000000000) ans+=n-999999999;
    if(n>=1000000000000) ans+=n-999999999999;
    if(n>=1000000000000000) ans+=n-999999999999999;
    cout << ans << endl; return 0;
    
}