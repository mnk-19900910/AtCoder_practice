#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    string s; cin >> s;
    bool can=true;
    if(s[0]!='A') can=false;
    int count=0;
    for(int i=2; i < s.size()-1; i++){
        if(s[i]=='C') count++;
    }
    if(count!=1) can=false;
    int count2=0;
    for(int i=1; i < s.size(); i++){
        if(s[i]>='A' && s[i]<='Z')count2++;
    }
    if(count2!=1) can=false;
    cout << (can ? "AC" : "WA") << endl;
}
