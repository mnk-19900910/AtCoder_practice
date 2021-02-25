#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int a[110];
int main() {
    int n; cin >> n;
    ll gunum=0;
    for(int i=0; i < n; ++i) {
        cin >> a[i];
        if(a[i]%2==0) gunum++;
    }
    cout << pow(3,n)-pow(2,gunum) << endl;    
}