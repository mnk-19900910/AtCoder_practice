#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
ll ans=0;
ll n;
int main() {
    cin >> n;
    set<ll> s;
    for(ll k=2; k*k <= n; ++k){
        for(ll i=k*k; i <= n ; i*=k){
            s.insert(i);
        }
    }
    cout << n-s.size() << endl;
}