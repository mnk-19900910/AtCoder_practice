#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int calcProduct(int n) {
  return (n == 1)? 1: n * calcProduct(n - 1);
}

int main() {
    int n; cin >> n;
    rep(i,n){
        ll l,r,ans=0;
        cin >> l>>r;
        int x=r-2*l;
        if(x>=0) ans+=calcProduct(x+1);
        cout << ans << endl;
    }
}//not ac