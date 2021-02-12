#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int x[N], y[N], h[N];
    for (int i = 0; i < N; i++) cin >> x[i] >> y[i] >> h[i];

    for (int cx = 0; cx <= 100; cx++) {
        for (int cy = 0; cy <= 100; cy++) {
            int H = -1;
            int Hmax = 1e10;
            int ans = 1; 
            for (int i = 0; i < N; i++) {
                int d= abs(cx-x[i]) + abs(cy-y[i]);
                if (h[i] > 0) {
                    int H2 = h[i] + d;
                    if (H > 0 && H != H2) {
                        ans = 0;
                        break;
                    }
                    else H = H2;
                }
                else Hmax = min(Hmax, d);
            }
            if (ans == 1 && H <= Hmax) {
                cout << cx << " " << cy << " " << H << endl;
                return 0;
            }
        }
    } 
    return 0;
}
