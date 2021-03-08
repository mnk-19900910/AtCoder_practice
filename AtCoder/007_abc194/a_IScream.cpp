#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int a,b; cin >> a>>b;
    int x=a+b;
    if(x>=15 && b>=8) {cout << 1 << endl; return 0;}
    else if(x>=10 && b>=3) {cout << 2 << endl; return 0;}
    else if(x>=3) {cout << 3 << endl; return 0;}
    else {cout << 4 << endl; return 0;}
}