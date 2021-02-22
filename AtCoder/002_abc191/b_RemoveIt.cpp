#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n,x;
    cin >> n>>x;
    int a[n+1];
    rep(i,n) {
        cin >> a[i];
        if(a[i]!=x){
            cout << a[i] << " "; 
        }
    }
    cout << endl; 
}