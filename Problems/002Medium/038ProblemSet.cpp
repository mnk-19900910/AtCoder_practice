#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int n; cin >> n;
    map<int,int> ma;
    for(int i=0; i < n; ++i){
        int d; cin >> d;
        ma[d]++;
    }
    int m; cin >> m;
    for(int i=0; i < m; ++i){
        int t; cin >> t;
        ma[t]--;
        if(ma[t]<0){cout << "NO" << endl; return 0;}
    }
    cout << "YES" << endl;
}