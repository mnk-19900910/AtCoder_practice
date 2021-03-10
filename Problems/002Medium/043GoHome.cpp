#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
int main() {
    ll x; cin >> x;
    for(int i=1; ; ++i){
        ll k=i*(i+1)/2;
        if(k<x) continue;
        else {cout << i << endl; return 0;}
    }
}