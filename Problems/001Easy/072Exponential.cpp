#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
int main() {
    int x; cin >> x;
    for(int k=x; k >= 1; --k){
        for(int b=x; b >= 1; --b){
            for(int p=(x/2); p >= 2; --p){
                if(k==pow(b,p)) {cout <<k<< endl; return 0;}
            }
        }
    }
    cout << 1 << endl;
}