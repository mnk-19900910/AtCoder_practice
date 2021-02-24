#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    string s; cin >> s;
    int ans=0;
    stack<char> st;
    for(int i=0; i < s.size(); ++i){
        if(st.empty()||st.top()==s[i]) st.push(s[i]);
        else{
            ans+=2;
            st.pop();
        }
    }
    cout << ans << endl;
}