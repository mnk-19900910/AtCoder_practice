#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int a,b,m;
    cin >>a>>b>>m;
    int minA=2e5, minB=2e5;
    int A[100005], B[100005];
    for(int i=1; i <= a; i++){
        cin>>A[i];
        minA=min(minA,A[i]);
    }
    for(int i=1; i <= b; i++){
        cin>>B[i];
        minB=min(minB,B[i]);
    }
    int ans=minA+minB;
    rep(i,m){
        int x,y,c;
        cin>>x>>y>>c;
        ans=min(ans,A[x]+B[y]-c);
    }
    cout << ans << endl; 
}