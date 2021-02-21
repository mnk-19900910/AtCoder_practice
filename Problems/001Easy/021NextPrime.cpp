#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int x;
    cin >> x;
    for(int i=2; i < x; i++){
        if(x%i==0) {
            x++;
            i=1;
        }
    }
    cout << x << endl;
    return 0;
}