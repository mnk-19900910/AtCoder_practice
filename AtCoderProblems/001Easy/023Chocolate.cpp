#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n,d,x;
    cin >> n>>d>>x;
    int a[101];
    int ans=x;
    rep(i,n) {
        cin>>a[i];
        for(int j=0; (j*a[i]+1)<=d;j++){
            ans++;
        }
    }
    cout << ans << endl; 
}