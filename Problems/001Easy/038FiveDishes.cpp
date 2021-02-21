#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int ans=0,a,r=10;
    rep(i,5) {
        cin >> a;
        ans+=a;
        if(a%10!=0){
            ans+=10-a%10;
            r=min(r,a%10);
        }
    }
    cout<<ans-(10-r)<<endl;
}