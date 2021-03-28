#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
int main() {
    ll n,m; cin >> n>>m;
    ll ki=0,gu=0;
    for(int i=0; i < n; ++i){
        string s; cin >> s;
        ll count=0;
        for(int j=0; j < m; ++j){
            if(s[j]=='1')count++;
        }
        if(count%2==1)ki++;
        else gu++;
    } 
    cout << ki*gu << endl;
}