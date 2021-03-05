#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int n; cin >> n;
    vector<int> h(n);
    rep(i,n) cin >> h[i];
    int ans=0;
    while(true){
        if(*max_element(h.begin(),h.end())==0) break;
        for(int i=0; i < n; ){
            if(h[i]==0) i++;
            else{
                ans++;
                while(i<n && h[i]>0){
                    h[i]--;
                    i++;
                }
            }
        }
    }
    cout << ans << endl;
}