#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    ll n,m; cin >> n>>m;
    if(n==2||m==2){cout << 0 << endl; return 0;}
    if(n==1&&m==1){cout << 1 << endl; return 0;}
    if(n==1&&m>=3){cout << m-2 << endl; return 0;}
    if(m==1&&n>=3){cout << n-2 << endl; return 0;}
    cout << (m-2)*(n-2) << endl;
}