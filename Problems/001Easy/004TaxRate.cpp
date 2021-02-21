#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n,price;
    cin >>n;
    rep(i,50000){
        price=i*1.08;
        if(price==n){
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
}