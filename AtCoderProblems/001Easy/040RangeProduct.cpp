#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int a,b; cin >> a>>b;
    int ans=1;
    if(b<0){
        int n=b-a+1;
        if(n%2)ans=-1;
    }
    if(a<=0 && b>=0) {
        cout << "Zero" << endl;
        return 0;
    }
    cout << (ans>0 ? "Positive" : "Negative") << endl;

}