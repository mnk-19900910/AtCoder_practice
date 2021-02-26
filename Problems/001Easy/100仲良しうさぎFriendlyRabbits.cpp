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
    ll ans=0;
    for(int k=1; k <= n; ++k){
        //k=1,a[k]=2, k=2,a[k]=1(=a[a[k]])のとき、kとa[a[k]]が等しい時とき仲良し
        if(k==a[a[k]]) ans++;
    }
    cout << ans/2 << endl;
}