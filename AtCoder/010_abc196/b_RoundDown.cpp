#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
int main() {
    string s; cin >>s;
    int f=0;
    for(int i=0; i < s.size(); ++i){
        if(s[i]=='.'){
            f=i;
            break;
        }
    }
    if(f==0) cout << s << endl;
    else cout << s.substr(0,f) << endl;
}