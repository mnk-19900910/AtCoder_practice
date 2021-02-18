#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int ma=101010;
    vector<int> is_prime(ma,1);
    is_prime[0]=0, is_prime[1]=0;
    for(int i=2; i < ma; i++){
        if(!is_prime[i]) continue;
        for(int j=2*i; j < ma; j+=i) is_prime[j]=0;
    }
    vector<int> a(ma,0);
    for(int i=0; i < ma; i++){
        if(i%2==0) continue;
        if(is_prime[i] && is_prime[(i+1)/2]) a[i]=1;
    }

    vector<int> s(ma+1,0);
    for(int i=0; i < ma; i++) s[i+1]=s[i]+a[i];

    int q; cin>>q;
    for(int i=0; i < q; i++){
        int l,r; cin>>l>>r;
        r++;
        cout<<s[r]-s[l]<<endl;
    }
}