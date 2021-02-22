#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    double v,t,s,d;
    cin >> v>>t>>s>>d;
    double time=d/v;
    if(time>=t && time<=s){
        cout << "No" << endl; 
    }else{
        cout << "Yes" << endl; 

    }

}