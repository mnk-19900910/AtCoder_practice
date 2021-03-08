#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rep(i,n) cin >> a[i]>>b[i];
    int ans=100100100;
    for(int i=0; i < n; ++i){
        for(int j=0; j < n; ++j){
            if(i!=j) ans=min(ans,max(a[i],b[j]));
            else ans=min(ans,a[i]+b[j]);
        }
    }
    cout << ans << endl;
}