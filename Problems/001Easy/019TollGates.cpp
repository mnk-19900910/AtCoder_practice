#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n,m,x;
    cin >> n>>m>>x;
    int a;
    int l=0,r=0;
    rep(i,m){
        cin >>a;
        if(a<x) l++;
        else r++;
    }
    cout << min(l,r) << endl; 
}