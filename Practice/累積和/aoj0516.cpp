#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n,k;
    while(cin>>n>>k){
        if(n==0) break;
        vector<ll> a(n);
        rep(i,n) cin >> a[i];

        // 累積和を前計算
        vector<int> s(n+1,0);
        rep(i,n) s[i+1]=s[i]+a[i];

        ll res = -1000000000; //初期値は小さい値にしておく
        for (int i = 0; i <= n-k; i++){
            ll val=s[k+i]-s[i];
            if(res<val) res=val;
        } 
        cout<<res<<endl;
    }
}