#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int a,b,c;
    cin >>a>>b>>c;
    int count =0;
    while(a%2==0 && b%2==0 && c%2==0){
        if(a==b && b==c) {
            count = -1;
            break;
        }
        int tmpa=a/2, tmpb=b/2, tmpc=c/2;
        a = tmpb+tmpc;
        b = tmpa+tmpc;
        c = tmpa+tmpb;
        count++;
    }
    cout << count << endl; 
}