#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n,k,q;
    cin >> n>>k>>q;
    int num[100005]={0};
    rep(i,q) {
        int a;
        cin>>a;
        a--;
        num[a]++;
    }
    rep(i,n) {
        int count=(k-q+num[i]);
        cout<<(count>0 ? "Yes" : "No")<<endl;
    }
}
