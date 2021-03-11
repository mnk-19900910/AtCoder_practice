#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 100100100;
int main() {
    ll l,r; cin >> l>>r;
    if(r-l>=2019) cout << 0 << endl;
    else{
        ll ans=2018;
        for(ll i=l; i < r; ++i){
            for(ll j=l+1; j <= r; ++j){
                ans=min(ans, (i*j)%2019);
            }
        }
        cout << ans << endl;
    }
}