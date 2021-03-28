#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
int main() {
    ll n; cin >> n;
    for(int i=1; ; ++i){
        ll x=stoll(to_string(i)+to_string(i));
        if(x>n){
            cout << i-1 << endl;
            return 0;
        }
    }
}