#include <bits/stdc++.h>
#include <deque>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
int main() {
    int n; cin >> n;
    deque<int> ans;
    int l=n%2;
    for(int i=1; i <= n; ++i){
        int a; cin >> a;
        if(l) ans.push_front(a);
        else ans.push_back(a);
        l=1-l;
    }
    rep(i,n) cout << ans[i] << " ";
    cout << endl;
}