#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    ll n; cin >> n;
    ll mi=INFll;
    for(int i=0; i < n; ++i){
        ll a,p,x; cin >> a>>p>>x;
        if(a<x) mi=min(mi,p);
    }
    if(mi==INFll) cout << -1 << endl;
    else cout << mi << endl;
}