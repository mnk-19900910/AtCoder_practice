#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 100100100;
int main() {
    ll n; cin >> n;
    vector<ll> x(n),a(n);
    rep(i,n) cin >> x[i];
    a=x;
    sort(a.begin(),a.end());
    int left=a[n/2-1];
    int right=a[n/2];
    for(int i=0; i < n; ++i){
        if(x[i]<=left) cout << right << endl;
        else cout << left << endl;
    }
}