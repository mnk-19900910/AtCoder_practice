#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int a,b,c,x,y; cin >>a>>b>>c>>x>>y;
    ll ans=a*x+b*y;
    for(int i=1; i <= max(x,y); ++i){
        int anum=max(x-i,0);
        int bnum=max(y-i,0);
        ll tmp=a*anum+b*bnum+c*2*i;
        if(ans>tmp) ans=tmp;
        else break;
    }
    cout << ans << endl;
}