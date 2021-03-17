#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    int a;
    set<int> x;
    rep(i,n) {
        cin >> a;
        if(x.count(a)!=1) x.insert(a);
        else x.erase(a);
    }
    cout << x.size() << endl; 
}