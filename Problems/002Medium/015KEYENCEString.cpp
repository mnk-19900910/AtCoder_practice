#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    string s; cin >> s;
    int n=s.size();
    for(int i=0; i < n; ++i){
        for(int j=i; j <= n; ++j){
            string tmp=s.substr(0,i)+s.substr(j);
            if(tmp=="keyence") {cout << "YES" << endl; return 0;}
        }
    }
    cout << "NO" << endl;
}