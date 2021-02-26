#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int x; cin >> x;
    int count=20;
    for(int a=0; a <= count; a++){
        for(int b=0; b <= count; b++){
            for(int c=0; c <= count; c++){
                for(int d=0; d <= count; d++){
                    for(int e=0; e <= count; e++){
                        for(int f=0; f <= count; f++){
                            int price=100*a+101*b+102*c+103*d+104*e+105*f;
                            if(price<=x&&(x-price)%100==0) {cout << 1 << endl; return 0;}
                        }
                    }
                }
            }
        }
    }
    cout << 0 << endl;
}