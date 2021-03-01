#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int h,w; cin >> h>>w;
    vector<string> ans;
    for(int i=0; i < h; ++i){
        string s; cin >> s;
        if(s==string(w,'.'))continue;
        ans.push_back(s);
    }
    for(int j=0; j < ans[0].size(); ++j){
        bool all=true;
        for(int i=0; i < ans.size(); ++i){
            if(ans[i][j]!='.') all=false;
        }
        if(all){
            for(int i=0; i < ans.size(); ++i){
                ans[i].erase(ans[i].begin()+j);
            }
            --j;
        }
    }
    for(int i=0; i < ans.size(); ++i){
        cout << ans[i] << endl;
    }
}