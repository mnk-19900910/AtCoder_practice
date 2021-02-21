#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans=0,x=0;
    rep(i,n){
        if(s[i]=='I') ans++;
        else ans--;
        x=max(ans,x);
    }
    cout << x << endl; 
}