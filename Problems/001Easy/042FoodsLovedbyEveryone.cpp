#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n,m; cin >> n>>m;
    int ans=0;
    int num[31]={0};
    for(int i=0; i < n; i++){
        int k; cin >> k;
        int a[k+1];
        for(int j=1; j <= k; j++){
            cin >> a[j];
            num[a[j]]++;
        }
    }
    for(int x=1; x <= m; x++){
        if(num[x]==n)ans++;
    }
    cout << ans << endl;
}