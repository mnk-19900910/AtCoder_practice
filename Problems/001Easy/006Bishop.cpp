#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    long long h,w;
    cin >> h>>w;
    long long s=h*w;
    if(h==1 || w==1) cout << 1 << endl;
    else cout << (s+1)/2 << endl;
}