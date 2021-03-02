#include <bits/stdc++.h>
using namespace std;
int n;
vector<long long> a;
int main() {
    cin >> n;
    a.resize(n);
    for(int i=0; i < n; ++i) cin >> a[i];
    map<long long, long long> ma;
    for(int i=0; i < n; ++i) ma[a[i]]++;
    long long ans=0;
    for(auto k : ma) {
        ans+=k.second*(k.second-1)/2;
    }
    for(int i=0; i < n; ++i){
        long long tmp=ma[a[i]];
        long long before=tmp*(tmp-1)/2;
        long long after=(tmp-1)*(tmp-2)/2;
        cout << ans+after-before << endl;
    }
}