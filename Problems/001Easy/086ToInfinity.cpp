#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    string s; cin >> s;
    ll k; cin >> k;
    ll x=0;
    for(int i=0; i < s.size(); ++i){
        if(s[i]=='1') x++;
        else break;
    }
    if(k<=x) {cout << 1 << endl; return 0;}
    else {cout << s[x] << endl; return 0;}
}