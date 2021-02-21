#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n; cin >> n;
    int ans=0, mi=n+1;
    for(int k=1; k <= n; k++){
        int p; cin >> p;
        mi=min(p,mi);
        if(p==mi)ans++;
    }
    cout << ans << endl;
}