#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int a,b;
    cin >> a>>b;
    int ans=0;
    int num=1;
    while(num<b){
        num--;
        num+=a;
        ans++;
    }
    cout << ans << endl; 
}