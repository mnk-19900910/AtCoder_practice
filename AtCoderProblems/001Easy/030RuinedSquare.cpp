#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int dx=x2-x1, dy=y2-y1;
    int x3=x2-dy;
    int y3=y2+dx;
    int x4=x1-dy;
    int y4=y1+dx;
    cout << x3<<" "<<y3<<" "<<x4<<" "<<y4 << endl; 
}