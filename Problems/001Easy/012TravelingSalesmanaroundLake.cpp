#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int k,n;
    cin >> k>>n;
    int a[1000005];
    int diffmax=0;
    for(int i=1; i <= n; i++) {
        cin>>a[i];
        diffmax = max(diffmax, a[i]-a[i-1]);
    }
    int left = k-a[n]+a[1];
    diffmax=max(diffmax, left);
    int d=k-diffmax;
    cout << d << endl; 
}