#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int g1(int n){
    string s=to_string(n);
    sort(s.rbegin(),s.rend());
    return stoi(s);
}
int g2(int n){
    string s=to_string(n);
    sort(s.begin(),s.end());
    return stoi(s);
}
int f(int n){
    return g1(n)-g2(n);
}

int main() {
    int n,k; cin >> n>>k;
    rep(i,k)n=f(n);
    cout << n << endl;
}