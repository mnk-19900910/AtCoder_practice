#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >>n;
    int x[110];
    rep(i,n) cin >> x[i];
    int ans=1e6;
    for(int p=1; p <= 100; p++){
        int d=0;
        rep(i,n){
            d += (x[i]-p)*(x[i]-p);
        }
        ans=min(ans,d);
    }
    cout << ans << endl; 
}