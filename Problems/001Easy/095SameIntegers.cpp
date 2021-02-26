#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    int a[5];
    cin >>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    int x=a[2]-a[0];
    int y=a[2]-a[1];
    if(x%2==0 && y%2==0){ cout << x/2 + y/2; return 0; }
    if(x%2==0 || y%2==0){ cout << (x+1)/2 + (y+1)/2 +1; return 0;}
    else cout << x/2 + y/2 +1; 
}
