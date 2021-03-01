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
    string s; cin >> s;
    int ans=0;
    for(int i=1; i < n; ++i){
        string s1=s.substr(0,i);
        string s2=s.substr(i,n-i);
        int count=0;
        for(int j=0; j < 26; ++j){
            char x='a'+j;
            bool s1num=false,s2num=false;
            for(int k=0; k < s1.size(); ++k) if(s1[k]==x) s1num=true;
            for(int k=0; k < s2.size(); ++k) if(s2[k]==x) s2num=true;
            if(s1num&&s2num) count++;
        }
        ans=max(ans,count);
    }
    cout << ans << endl;
}