#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    string s; cin >> s;
    int aa=0,bb=0,cc=0;
    for(int i=0; i < s.size(); ++i){
        if(s[i]=='a') aa++;
        if(s[i]=='b') bb++;
        if(s[i]=='c') cc++;
    }
    int ma=max(aa,bb); ma=max(ma,cc);
    int mi=min(aa,bb); mi=min(mi,cc);
    cout << (ma-mi<=1 ? "YES" : "NO") << endl;
}