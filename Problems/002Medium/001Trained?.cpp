#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
ll a[100100100];
int main() {
    ll n; cin >> n;
    for(int i=1; i <= n; ++i) cin >> a[i];
    int ans=1, now=1;
    for(int i=1; i <= n; ++i){
        if(a[now]==2) {cout << i << endl; return 0;}
        else now=a[now];
    }
    cout << -1 << endl;
}