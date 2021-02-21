#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int a[10],n;
    rep(i,9) cin >> a[i+1];
    cin >> n;
    int b[n];
    int buckets[105]={0};
    rep(i,n){
        cin >> b[i];
        buckets[b[i]]++;
    }
    int ans=0;
    if(buckets[a[1]] && buckets[a[2]] && buckets[a[3]]) ans=1;
    if(buckets[a[4]] && buckets[a[5]] && buckets[a[6]]) ans=1;
    if(buckets[a[7]] && buckets[a[8]] && buckets[a[9]]) ans=1;
    if(buckets[a[1]] && buckets[a[4]] && buckets[a[7]]) ans=1;
    if(buckets[a[2]] && buckets[a[5]] && buckets[a[8]]) ans=1;
    if(buckets[a[3]] && buckets[a[6]] && buckets[a[9]]) ans=1;
    if(buckets[a[1]] && buckets[a[5]] && buckets[a[9]]) ans=1;
    if(buckets[a[3]] && buckets[a[5]] && buckets[a[7]]) ans=1;
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}