#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    ll h;
    cin >> h;
    ll ans=1;
    while(h>=ans) ans*=2;
    ans--;
    cout << ans << endl; 
}   