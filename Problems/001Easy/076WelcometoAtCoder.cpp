#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int n,m; cin >> n>>m;
    ll ac_num=0,wa_num=0;
    vector<ll> ac(n+1,0), wa(n+1,0);
    for(int i=0; i < m; ++i){
        int p; string s;
        cin >> p>>s;
        if(s=="AC"){
            if(ac[p]==0){
                ac_num++;
                wa_num+=wa[p];
                ac[p]=1;
            }
        }
        else wa[p]++;
    }
    cout << ac_num << " "<< wa_num << endl;
}