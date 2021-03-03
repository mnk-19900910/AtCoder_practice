#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    ll n,a,b; cin >> n>>a>>b;
    if(a>b){cout << 0 << endl; return 0;}
    if(n==1 && a!=b){cout << 0 << endl; return 0;}
    ll k=b-a;
    ll ans=k*(n-2)+1;
    cout << ans << endl;
}