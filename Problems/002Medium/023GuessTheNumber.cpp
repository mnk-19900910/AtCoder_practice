#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int n,m; cin >> n>>m;
    bool can=false;
    int s[10],c[10];
    bool one=false;
    for(int i=0; i < m; ++i) cin >> s[i]>>c[i];
    for(int i=0; i < 1000; ++i) {
        string a=to_string(i);
        if(a.size()!=n) continue;
        bool f=true;
        for(int j=0; j < m; ++j){
            if(a[s[j]-1] != c[j]+'0'){ //s[j]=1のとき左の値を指す(3桁なら百の位,2桁なら十の位)
                f=false; break;
            }
        }
        if(f){
            cout <<i<< endl;
            return 0;
        }
    }
    cout << -1 << endl;
}