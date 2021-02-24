#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int n; cin >> n;
    int sum=0;
    vector<int> a1(n);
    vector<int> a2(n);
    for(int i=0; i < n; ++i){
        cin >> a1[i];
        sum+=a1[i];
    } 
    for(int i=0; i < n; ++i){
        cin >> a2[i];
        sum+=a2[i];
    }
    int ma=0;
    for(int k=0; k < n; ++k){
        int tmp=sum;
        for(int i=k+1; i < n; ++i) tmp-=a1[i];
        for(int i=k; i > 0; --i) tmp-=a2[i-1];
        ma=max(ma,tmp);
    } 
    cout << ma << endl;
}