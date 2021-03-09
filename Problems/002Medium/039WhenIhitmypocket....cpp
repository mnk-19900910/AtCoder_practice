#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    ll k,a,b; cin >> k>>a>>b;
    ll ans=0,ans2=k+1;
    ans+=a; k-=(a-1);
    if(k%2==1){ans++; k--;}
    ans+=(b-a)*(k/2);
    cout << max(ans,ans2) << endl;
}