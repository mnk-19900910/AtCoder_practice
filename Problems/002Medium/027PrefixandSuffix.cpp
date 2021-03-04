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
    string s; cin >> s;
    string t; cin >> t;
    if(s==t){cout << n << endl; return 0;}
    int ans=n*2;
    for(int i=0; i < n; ++i){
        if(s.substr(i)==t.substr(0,n-i)) {ans=i+n; break;}
    }
    cout << ans << endl;
}