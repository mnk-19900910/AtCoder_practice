#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (long long i = 0; i < (n); i++)
using ll = long long;
const ll LINF = (1LL<<60)-1;
ll gcd(ll x, ll y) {
    if (x % y == 0) return y;
    else return gcd(y, x % y);
}
int main() {
    ll n; cin >> n;
    vector<ll> x(n);
    rep(i, n) cin >> x[i];
    vector<ll> p = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    ll ans = LINF; // 答えは十分に大きい値で初期化
    for (ll bit = 0; bit < (1 << (ll)p.size()); bit++) {
        bool ok = true;
        ll sum = 1;
        rep(i, (ll)p.size()) {
            if (bit & (1 << i)) {
                sum *= p[i];
            }
        }
        for (auto x_val : x) {
            if (gcd(x_val, sum) == 1) {
                ok = false;
            }
        }
        if (ok) ans = min(ans, sum);
    }
    cout << ans << endl;
}