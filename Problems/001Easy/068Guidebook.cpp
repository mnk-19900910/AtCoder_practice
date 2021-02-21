#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n; cin >> n;
    //<<レストラン名, 点数>, 番号>p
    vector<pair<pair<string, int>, int> > p(n);
    for(int i=0; i < (n); i++){
        cin >> p[i].first.first>>p[i].first.second;
        p[i].first.second *=-1;
        p[i].second=i+1;
    }
    sort(p.begin(),p.end());
    for(auto i : p){
        cout << i.second << endl;
    }
    
}