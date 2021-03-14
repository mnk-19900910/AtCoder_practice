#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 100100100;
int main() {
    int a,b,w; cin >> a>>b>>w;
    w*=1000;
    int ma=0, mi=INF;
    for(int i=1; i <= 1000000; ++i){
        if(a*i<=w && w<=b*i){
            ma=max(ma,i);
            mi=min(mi,i);
        }
    }
    if(ma==0) cout << "UNSATISFIABLE" << endl;
    else cout << mi<<" "<<ma << endl;
}