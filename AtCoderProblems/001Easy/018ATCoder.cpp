#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    string s;
    cin >> s;
    int ans=0;
    rep(i,s.length()){
        int count=0;
        while(s[i]=='A'|| s[i]=='C'||s[i]=='G'||s[i]=='T'){
            count++;
            i++;
        }
        ans=max(count,ans);
    }
    cout << ans << endl; 
}