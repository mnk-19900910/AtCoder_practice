#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    string s; cin>>s;
    int n=s.size()+1;
    vector<int> a(n,0);
    for(int i=0; i < n-1; ++i){
        if(s[i]=='<') chmax(a[i+1],a[i]+1);
    }
    for(int i=n-2; i>=0; --i){
        if(s[i]=='>') chmax(a[i],a[i+1]+1);
    }
    ll ans=0;
    for(int i=0; i < n; ++i) ans+=a[i];
    cout << ans << endl;
}