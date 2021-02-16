#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int h,w; cin >> h>>w;
    char c[105];
    for(int i=0; i < h; i++){
        for(int j=0; j < w; j++) cin >>c[j];
        for(int j=0; j < w; j++) cout << c[j];
        cout << endl;
        for(int j=0; j < w; j++) cout << c[j];
        cout << endl;
    }
    
}