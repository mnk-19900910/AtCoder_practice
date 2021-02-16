#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    string o,e; cin >> o>>e;
    int size;
    if(o.size()==e.size()) size=2*o.size();
    else size=2*o.size()-1;
    int ooo=0, eee=0;
    for(int i=0; i < size; i++){
        if(i%2==0) {cout << o[ooo];ooo++;}
        else {cout << e[eee];eee++;}
    }
    cout << endl;
}