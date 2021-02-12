#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    int n;
    cin >>n;
    int t[100005], x[100005], y[100005];
    t[0]=x[0]=y[0]=0;
    rep(i,n) cin>>t[i+1]>>x[i+1]>>y[i+1];
    bool ans = true;
    rep(i,n){
        int dtime = t[i+1]-t[i];
        int distance = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
        if(dtime < distance) ans = false;
        if(dtime%2 != distance%2) ans = false;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
