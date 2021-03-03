#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    ll n,k; cin >> n>>k;
    double pro=0;
    for(ll i=1; i <= n; ++i){
        double tmp=1;
        ll point=i;
        while(point < k){
            point*=2;
            tmp*=0.5;
        }
        pro+=tmp;
    }
    pro/=n;
    cout <<fixed<<setprecision(10)<< pro << endl;
}