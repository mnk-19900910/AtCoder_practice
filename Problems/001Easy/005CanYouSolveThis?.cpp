#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n,m,c;
    cin >>n>>m>>c;
    int b[m];
    rep(i,m) cin >> b[i];
    int count=0;
    rep(i,n){
        int a[m],ans=c;
        rep(j,m) {
            cin >> a[j];
            ans += a[j]*b[j];
        }
        if(ans>0) count++;
    }
    cout << count << endl; 
}