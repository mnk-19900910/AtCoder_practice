#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    ll n,a,b;
    cin >> n>>a>>b;
    ll Anum=n/(a+b)*a;
    n%=(a+b);
    Anum+=min(a,n);
    cout << Anum << endl; 
}