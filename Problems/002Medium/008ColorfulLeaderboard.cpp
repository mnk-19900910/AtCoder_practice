#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
string Rate(int aa){
    string x;
    if(aa<400) x="灰";
    if(aa>=400&&aa<800) x="茶";
    if(aa>=800&&aa<1200) x="緑";
    if(aa>=1200&&aa<1600) x="水";
    if(aa>=1600&&aa<2000) x="青";
    if(aa>=2000&&aa<2400) x="黄";
    if(aa>=2400&&aa<2800) x="橙";
    if(aa>=2800&&aa<3200) x="赤";
    if(aa>=3200) x="虹";
    return x;
}
int main() {
    int n; cin >> n;
    int a[110];
    rep(i,n) cin >> a[i];
    set<string> s;
    int rainbow=0;
    for(int i=0; i < n; ++i){
        string x=Rate(a[i]);
        if(x=="虹") rainbow++;
        s.insert(x);
    }
    int mi=s.size(),ma=s.size();
    if(rainbow>0){
        mi=s.size()-1;
        mi=max(1,mi);
        ma=s.size()-1+rainbow;
        ma=min(n,ma);
    }
    cout <<mi<<" "<<ma<< endl;
}