#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int n,a,b;
    cin >>n>>a>>b;
    string s;
    cin >>s;
    int pass=0;
    int global=0;
    rep(i,s.size()){
        if(s[i]=='a' && pass<(a+b)){
            cout << "Yes" << endl;
            pass++;
        }
        else if(s[i]=='b' && pass<(a+b) && global<b){
            cout << "Yes" << endl; 
            pass++;
            global++;
        }
        else {
            cout << "No" << endl; 
        }
    }    
}