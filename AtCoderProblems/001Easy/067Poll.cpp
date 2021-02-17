#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n; cin >> n;
    map<string, int> ma;
    int maxi=0;
    for(int i=0; i < n; i++){
        string s; cin >> s;
        ma[s]++;
        maxi=max(maxi,ma[s]);
    }
    for(auto i:ma){
        if(i.second==maxi) cout << i.first << endl;
    }
}