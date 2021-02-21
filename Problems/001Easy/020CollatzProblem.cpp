#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int s;
    cin >> s;
    set<int> a;
    while(a.count(s)==0){
        a.insert(s);
        if(s%2) s=3*s+1;
        else s/=2;
    }
    cout << a.size()+1 << endl; 
}