#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    string s;
    cin >> s;
    int d[30]={0};
    rep(i,s.size()) {
        if(d[s[i]-'a']>=1){
            cout << "no" << endl;
            return 0;
        }
        d[s[i]-'a']++;
    }
    cout << "yes" << endl;
}