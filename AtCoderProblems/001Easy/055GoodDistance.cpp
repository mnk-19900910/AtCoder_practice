#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    int X[N][D], ans=0;
    for (int a = 0; a < N; a++) {
        for (int b = 0; b < D; b++) {
            cin >> X[a][b];
        }
    }
    for (int a = 0; a < N; a++) {
        for (int b = 0; b < a; b++) {
            int d = 0;
            for (int c = 0; c < D; c++) {
                d += pow((X[a][c] - X[b][c]),2);
            }
            int y;
            y = sqrt(d);
            if (y*y == d) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}