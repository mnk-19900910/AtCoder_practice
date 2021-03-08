#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(int i=0; i < n; ++i) cin >> a[i];
    vector<ll> s1(n+1), s2(n+1);
    s1[0]=0,s2[0]=0;
    for(int i=1; i <= n; ++i){
        s1[i]=s1[i-1]+a[i-1];
        s2[i]=s2[i-1]+a[i-1]*a[i-1];
    }
    cout << n*s2[n]-s1[n]*s1[n] << endl;
}