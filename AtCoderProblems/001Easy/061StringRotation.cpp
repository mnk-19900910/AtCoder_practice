#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    string s,t; cin >> s>>t;
    for(int i=0; i < s.size(); i++){
        if(s==t){cout << "Yes" << endl; return 0;}
        char x=s[s.size()-1];
        s=x+s;
        s.pop_back();
    }
    cout << "No" << endl;
}