#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
map<int,int>mp;
vector<int> v;
int main() {
    int n,k; cin >> n>>k;
    for(int i=0; i < n; ++i){
        int a; cin >> a;
        mp[a]++;
    }
    for(auto i=mp.begin(); i!=mp.end(); ++i){
        v.push_back(i->second);
    }
    sort(v.begin(),v.end());
    int ans=0;
    if(v.size()>k){
        for(int i=0; i < v.size()-k; ++i) ans+=v[i];
    }
    cout << ans << endl;
}