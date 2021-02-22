#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int n,k; cin >> n>>k;
    vector<ll> h(n);
    rep(i,n) cin >> h[i];
    sort(h.begin(),h.end());
    ll mi=INF;
    for(int i=0; i < n-k+1; ++i){
        chmin(mi,h[i+k-1]-h[i]);
    }
    cout << mi << endl;
}