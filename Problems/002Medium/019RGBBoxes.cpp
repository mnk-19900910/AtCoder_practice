#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
int main() {
    int r,g,b,n; cin >> r>>g>>b>>n;
    int ans=0;
    int atime=n/r,btime=n/g;
    for(int x=0; x <= atime; ++x){
        for(int y=0; y <= btime; ++y){
            int num=x*r+y*g;
            if(num>n) continue;
            ll z=n-num;
            if(z%b!=0)continue;
            ans++;
        }
    }
    cout << ans << endl;
}