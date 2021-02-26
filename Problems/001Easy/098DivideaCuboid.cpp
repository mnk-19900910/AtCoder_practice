#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    ll a,b,c;cin>>a>>b>>c;
    if(a%2&&b%2&&c%2){
        vector<ll> x;
        x.push_back(a);
        x.push_back(b);
        x.push_back(c);
        sort(x.begin(),x.end());
        cout << x[0]*x[1] << endl;
    }else cout << 0 << endl;
}