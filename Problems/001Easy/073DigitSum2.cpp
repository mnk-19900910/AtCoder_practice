#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
// int keta(int n){
//     int ans=1;
//     n/=10;
//     while(n){
//         ++ans;
//         n/=10;
//     }
//     return ans;
// }
int main() {
    ll n; cin >> n;
    ++n;
    ll ans=0;
    while(n){
        if(n<10) ans+=n-1;
        else ans+=9;
        n/=10;
    }
    cout << ans << endl;
}