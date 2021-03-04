#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    ll n; cin >> n;
    ll d=0,d2=0,d4=0;
    for(ll i=0; i < n; ++i){
        ll a; cin >> a;
        if(a%4==0) d4++;
        else if(a%2==0) d2++;
        else d++;
    }
    if(d2)d++;
    if(d-1<=d4){cout << "Yes" << endl; return 0;}
    else {cout << "No" << endl; return 0;}
}