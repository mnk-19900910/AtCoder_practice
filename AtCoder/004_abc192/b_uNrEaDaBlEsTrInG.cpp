#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    string s;
    cin >> s;
    int ans=1;
    for(int i=0; i < s.size(); i++){
        if(i%2==0){
            if(s[i]>='a' && s[i]<='z') ans=1;
            else {ans=0; break;}
        }else{
            if(s[i]>='A' && s[i]<='Z') ans=1;
            else {ans=0; break;}
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
}