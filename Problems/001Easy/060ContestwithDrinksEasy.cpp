#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n; cin >> n;
    int t[n];
    int sum=0;
    rep(i,n) {
        cin >> t[i];
        sum+=t[i];
    }
    int m; cin >> m;
    for(int i=0; i < m; i++){
        int ans=sum;
        int p,m; cin >> p>>m;
        ans=ans-t[p-1]+m;
        cout << ans << endl;
    }
}