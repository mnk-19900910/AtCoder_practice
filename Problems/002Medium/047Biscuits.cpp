#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int n,p; cin >> n>>p;
    int ki=0;
    for(int i=0; i < n; ++i){
        int a; cin >> a;
        if(a%2) ki++;
    }
    if(ki==0) cout << (p==0 ? (ll)pow(2,n) : 0 ) << endl;
    else cout << (ll)pow(2,n-1) << endl;
}