#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    string s; cin >> s;
    int ans=0;
    bool one=false;
    int pt=0;
    while(pt<s.size()){
        if(pt==s.size()-2 && s[pt]==s[pt+1]){ans++; break;}
        if(one && s[pt]==s[pt-1]){
            ans++;
            pt+=2;
            one=false;
        }else{
            ans++;
            pt++;
            one=true;
        }
    }
    cout << ans << endl;
}