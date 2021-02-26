#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    string s; cin >> s;
    int a=0,b=0,c=0,d=0;
    for(int i=0; i < s.size(); i++){
        if(s[i]=='N') a=1;
        if(s[i]=='S') b=1;
        if(s[i]=='E') c=1;
        if(s[i]=='W') d=1;
    }
    int ans=0,x=0,y=0;
    if(a==b) x=1;
    if(c==d) y=1;
    cout << (x==1&&y==1 ? "Yes" : "No") << endl;
}