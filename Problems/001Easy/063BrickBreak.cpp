#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n; cin >> n;
    int a[n+5];
    for(int i=1; i <= n; i++) cin >> a[i];
    int count=0;
    int x=1;
    for(int k=1; x<= n; x++){
        if(n==1&&a[x]==1){cout << 0 << endl; return 0;}
        if(k!=a[x]) count++;
        else k++;
    }
    cout << (count!=n ? count : -1) << endl;
}