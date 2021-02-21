#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n; cin >> n;
    int ma=0,ans=0;
    int h[100002];
    rep(i,n) cin >> h[i];
    for(int i=0; i < (n-1); i++){
        if(h[i]>=h[i+1])ma++;
        else ma=0;
        ans=max(ma,ans);
    }
    cout << ans << endl;
}