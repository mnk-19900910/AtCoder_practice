// N 個の硬貨があります。番号 ii の硬貨は AiAi 円です。硬貨の選び方は 2N2N 通りありますが、その中で合計価格が丁度 XX 円となる選び方は存在するでしょうか。
// 制約：1≤N≤20,1≤X,Ai≤1081≤N≤20,1≤X,Ai≤108

#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int a[22];
int main() {
    int n,x; cin >> n>>x;
    bool ans=false;
    for(int i=0; i < n; ++i) cin >> a[i];
    for(int i=0; i < (1<<n); ++i){
        int bit[30],sum=0;
        for(int j=0; j < n; ++j){
            int div=(1<<j);
            bit[j]=(1/div)%2;
        }
        for(int j=0; j < n; ++j) sum+=a[j]*bit[j];
        if(sum==x) ans=true;
    }
    cout << (ans ? "Yes" : "No") << endl;
}