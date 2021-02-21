#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    ll n,k;
    cin >>n>>k;
    ll ans=0;
    ll a=n%k;
    ll b=abs(k-a);
    cout << min(a,b) << endl; 
}