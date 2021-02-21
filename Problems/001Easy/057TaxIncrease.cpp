#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    double a,b;
    cin >> a>>b;
    for(int i=1; i < 10100; i++){
        double ans =floor((double)i * 0.08);
        double ans2 =floor((double)i * 0.1);
        if(ans==a && ans2==b){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}