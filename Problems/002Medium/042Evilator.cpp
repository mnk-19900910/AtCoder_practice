#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
int main() {
    string s; cin >> s;
    ll ans=0;
    ll n=s.size();
    for(int i=0; i < n; ++i){
        if(s[i]=='U') ans+=(n-i-1)+i*2;
        if(s[i]=='D') ans+=(n-i-1)*2+i;
    }
    cout << ans << endl;
}