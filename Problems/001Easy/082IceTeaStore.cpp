#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    ll q,h,s,d,n; cin >> q>>h>>s>>d>>n;
    ll one=min({q*4,h*2,s}); 
    cout << min(one*n, d*(n/2)+one*(n%2)) << endl;
}