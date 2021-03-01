#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    int n;
    cin >>n;
    int x[1000005]={0}, a[n];
    rep(i,n) {
        cin >> a[i];
        x[a[i]]++;
    }
    int ans=0;
    for (int i = 1; i <= 1000000; i++) {
        ans=max(ans, x[i-1]+x[i]+x[i+1]);
    }
    cout << ans << endl; 
}
