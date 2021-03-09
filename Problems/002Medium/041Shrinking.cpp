#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
vector<int> x(26,0);
int main() {
    string s; cin >> s;
    int ans=s.size();
    for(char c:s){
        int tmp=0;
        for(int i=0; i < s.size();){
            int j=i;
            while(j<s.size() && !((s[j]==c)^(s[i]==c)))++j;
            if(s[i]!=c) chmax(tmp,j-i);
            i=j;
        }
        chmin(ans,tmp);
    }
    cout << ans << endl;
}