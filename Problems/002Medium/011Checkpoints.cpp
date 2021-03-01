#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int a[55],b[55],c[55],d[55];
int main() {
    int n,m; cin >> n>>m;
    rep(i,n) cin >> a[i] >> b[i];
    rep(i,m) cin >> c[i] >> d[i];
    for(int i=0; i < n; ++i){
        ll mi=INFll;
        ll x,ans;
        for(int j=0; j < m; ++j){
            x=abs(a[i]-c[j])+abs(b[i]-d[j]);
            if(mi>x){
                mi=x;
                ans=j+1;
            }
        }
        cout << ans << endl;
    }
}