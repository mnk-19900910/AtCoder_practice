#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N,T,A;
    cin >> N >> T >> A;
    int H;
    double ans=1e9;
    int ansi;
    for (int i = 1; i < N+1; i++) {
        cin >> H;
        double p = T - H*0.006;
        double q = abs(A-p);
        if (q<ans){
            ans=q;
            ansi=i;
        }
    }
    cout << ansi << endl;
    return 0;
}
