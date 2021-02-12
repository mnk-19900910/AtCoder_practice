#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    vector<int> math(n);
    vector<int> english(n);
    rep(i,n) cin >> math.at(i);
    rep(i,n) cin >> english.at(i);
    rep(i,n) {
        cout<<math.at(i)+english.at(i)<<endl;
    }

}