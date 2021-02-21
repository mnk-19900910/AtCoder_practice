#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    ll n; cin >> n;
    ll x[100];
    x[0]=2;
    x[1]=1;
    for(int i=2; i<n+2; i++){
        x[i]=x[i-1]+x[i-2];
    }
    cout << x[n] << endl;
}