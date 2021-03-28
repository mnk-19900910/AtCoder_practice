#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 100100100;
int main() {
    string s; cin >> s;
    char a; a=s[0];
    s.erase(0,1);
    cout << s+a << endl;
}