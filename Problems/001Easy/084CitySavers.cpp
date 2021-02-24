#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int n; cin >> n;
    vector<int> a(n+1);
    rep(i,n+1) cin >> a[i];
    vector<int> b(n);
    rep(i,n) cin >> b[i];
    ll count=0;
    for(int i=0; i < n; ++i){
        if(a[i]>=b[i]){
            count+=b[i];
            a[i]-=b[i];
        }else{
            count+=a[i];
            b[i]-=a[i];
            if(a[i+1]>=b[i]){
                count+=b[i];
                a[i+1]-=b[i];
            }else{
                count+=a[i+1];
                a[i+1]=0;
            }
        }
    }
    cout << count << endl;
}