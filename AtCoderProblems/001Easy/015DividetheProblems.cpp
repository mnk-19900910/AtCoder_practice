#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    int d[n];
    rep(i,n) cin >> d[i];
    sort(d,d+n);
    int x=n/2;
    int ans = d[x]-d[x-1];
    cout << ans << endl; 
}