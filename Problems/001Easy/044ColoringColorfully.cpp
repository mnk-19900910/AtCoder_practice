#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    string s;
    cin >> s;
    int f0=s.size(), f1=s.size();
    for(int i=0; i < s.size(); i++){
        if(i%2==0){
            if(s[i]=='0')f0--;
            if(s[i]=='1')f1--;
        }else{
            if(s[i]=='1')f0--;
            if(s[i]=='0')f1--;
        }
    }
    cout << min(f0,f1) << endl;
}
