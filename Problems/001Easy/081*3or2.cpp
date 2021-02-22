#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
ll pow_num(ll a){
    int ans=0;
    while(a%2==0){
        ans++;
        a/=2;
    }
    return ans;
}
int main() {
    int n; cin >> n;
    int ans=0;
    rep(i,n) {
        ll a; cin >> a;
        ans+=pow_num(a);
    }
    cout << ans << endl;
}