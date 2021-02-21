#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    double v[n+1];
    rep(i,n) cin >> v[i];
    sort(v,v+n);
    double ans=v[0];
    for(int i=0; i < (n-1); i++) {
        ans=(ans+v[i+1])/2;
    }
    cout<<ans<<endl;
}