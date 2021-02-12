#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    rep(i,n) {
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0; i < n; i++) {
        if(a[i]!=b[n-1]) cout<<b[n-1]<<endl;
        else cout<<b[n-2]<<endl;
    }
}