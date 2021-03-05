#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef unsigned long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
ll GCD(ll x,ll y){return y ? GCD(y,x%y):x;}
ll num(ll n,ll c,ll d){
    ll g=GCD(c,d);
    ll l=c/g*d;
    return n - n/c - n/d +n/l; 
}
int main() {
    ll a,b,c,d,ans=0; cin >> a>>b>>c>>d;
    ll bnum=num(b,c,d);
    ll anum=num(a-1,c,d);
    cout << bnum-anum << endl;
}