#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n,k;
    cin >> n>>k;
    int x[n];
    rep(i,n) cin>>x[i];
    int d=0;
    rep(i,n){
        if(x[i] <= k-x[i]) d+=x[i]*2;
        else d+=(k-x[i])*2;
    }
    cout << d << endl; 
}