#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int n; cin >> n;
    int ans=1,ma=0;
    for(int k=0; k < n; ++k){
        int a; cin >>a;
        if(ma-a>1) {ans=0; break;}
        ma=max(ma,a);
    }
    cout << (ans ? "Yes" : "No") << endl;
}