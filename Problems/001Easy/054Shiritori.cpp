#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n; cin >> n;
    string w[105]; 
    rep(i,n) cin >> w[i];
    int ans=1;
    for(int i=1; i < n; i++) {
        if(w[i-1][w[i-1].size()-1]!=w[i][0]) {ans=0; break;}
        for(int j=0; j < i; j++){
            if(w[i]==w[j]) {ans=0; break;}
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    
}