#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    double w,h,x,y; cin >> w>>h>>x>>y;
    double s=w*h/2;
    int f=0;
    if(w==x*2 && h==y*2) f=1;
    cout << fixed << setprecision(10)<< (double)s<<" "<< f << endl;
}