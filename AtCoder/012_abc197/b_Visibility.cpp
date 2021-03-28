#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const int INF = 100100100;
string s[110];
int main() {
    int h,w,x,y; cin >>h>>w>>x>>y;
    int ans=0;
    for(int i=0; i < h; ++i){
        cin >> s[i];
    }
    if(s[x-1][y-1]=='.') ans++;
    for(int i=y; i < w; ++i){
        if(s[x-1][i]=='.') ans++;
        else break;
    }
    for(int i=y-2; i >= 0; --i){
        if(s[x-1][i]=='.') ans++;
        else break;
    }
    for(int i=x-2; i >= 0; --i){
        if(s[i][y-1]=='.') ans++;
        else break;
    }
    for(int i=x; i < h; ++i){
        if(s[i][y-1]=='.') ans++;
        else break;
    }
    cout << ans << endl;
}