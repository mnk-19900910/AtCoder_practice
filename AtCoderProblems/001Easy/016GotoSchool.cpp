#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    int a[n+1], ans[n+1];
    int rank[100005]={0};
    for(int i=1; i <= n; i++) {
        cin >> a[i];
        rank[a[i]]=i;
    }
    for(int i=1; i <= n; i++) cout << rank[i] << " ";
    cout << endl; 
}