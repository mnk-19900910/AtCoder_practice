#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i=0; i < n; ++i) cin >> a[i];
    vector<ll> s(n+1,0);
    for(int i=0; i < n; ++i) s[i+1]=s[i]+a[i];
    ll mi=INFll;
    for(int k=1; k < n; ++k){
        ll left=s[k];
        ll right=s[n]-s[k];
        mi=min(mi,abs(right-left));
    }
    cout << mi << endl;
}