#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int h,w; cin >> h>>w;
    char p;
    for(int x=0; x < w+2; x++) cout << '#';
    cout << endl;
    for(int i=0; i < h; i++){
        cout << '#';
        for(int j=0; j < w; j++){
            cin >> p;
            cout << p;
        }
        cout << '#';
        cout << endl;
    }
    for(int x=0; x < w+2; x++) cout << '#';
    cout << endl;
    
}