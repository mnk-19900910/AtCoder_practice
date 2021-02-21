#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    string s;
    cin>>s;
    int ans=1000;
    for(int i=0; i < s.size()-2; i++){
        int a=s[i]-'0';
        int b=s[i+1]-'0';
        int c=s[i+2]-'0';
        int num=100*a+10*b+c;
        ans=min(ans,abs(num-753));
    }
    cout << ans << endl; 
}