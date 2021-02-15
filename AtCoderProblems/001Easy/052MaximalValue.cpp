#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    ll n; cin >> n;
    ll b[105];
    rep(i,n-1) cin >> b[i];
    ll sum=b[0];
    for(int i=0; i < n-2; i++){
        sum+=min(b[i],b[i+1]);
    }
    sum+=b[n-2];
    cout << sum << endl;
}