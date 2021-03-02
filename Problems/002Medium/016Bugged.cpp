#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int n; cin >> n;
    int a[110],sum=0;
    rep(i,n) {
        cin >> a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    if(sum%10!=0){cout << sum << endl; return 0;}
    for(int i=0; i < n; ++i){
        if(a[i]%10!=0) {cout << sum-a[i] << endl; return 0;}
    }
    cout << "0" << endl;
}