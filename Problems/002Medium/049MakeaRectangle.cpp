#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 100100100;
int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end(),greater<ll>());
    ll x=0,y=0;
    for(int i=1; i < n; ++i){
        if(a[i-1]==a[i]){
            if(x==0){x=a[i]; i++;}
            else{y=a[i]; break;}
        }
    }
    cout << x*y << endl;
}