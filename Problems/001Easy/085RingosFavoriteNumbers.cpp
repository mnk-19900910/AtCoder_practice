#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int d,n; cin >>d>> n;
    ll ans;
    if(d==0){
        if(n==100) ans=101;
        else ans=n;
    }else if (d==1)
    {
        if(n==100) ans=10100;
        else ans=n*100;
    }else{
        if(n==100) ans=1010000;
        else ans=n*10000;
    }
    cout << ans << endl;
}