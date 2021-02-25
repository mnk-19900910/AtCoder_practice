#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int x; cin >>x;
    int a=x/1000,b=(x/100)%10,c=(x/10)%10,d=x%10;
    if(a+b+c+d==7){cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"=7"<< endl; return 0;}
    if(a+b+c-d==7){cout<<a<<"+"<<b<<"+"<<c<<"-"<<d<<"=7"<< endl; return 0;}
    if(a+b-c+d==7){cout<<a<<"+"<<b<<"-"<<c<<"+"<<d<<"=7"<< endl; return 0;}
    if(a+b-c-d==7){cout<<a<<"+"<<b<<"-"<<c<<"-"<<d<<"=7"<< endl; return 0;}
    if(a-b+c+d==7){cout<<a<<"-"<<b<<"+"<<c<<"+"<<d<<"=7"<< endl; return 0;}
    if(a-b+c-d==7){cout<<a<<"-"<<b<<"+"<<c<<"-"<<d<<"=7"<< endl; return 0;}
    if(a-b-c+d==7){cout<<a<<"-"<<b<<"-"<<c<<"+"<<d<<"=7"<< endl; return 0;}
    if(a-b-c-d==7){cout<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"=7"<< endl; return 0;}
}