#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef unsigned long long ll;
int main() {
    double a,b; cin >> a>>b;
    if(a>b) cout << "GREATER" << endl;
    else if(a<b) cout << "LESS" << endl;
    else cout << "EQUAL" << endl;
}