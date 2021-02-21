#include <iostream>
using namespace std;
int main() {
    int N = 3;
    int c[N][N];
    for (int a = 0; a < N; a++) {
        for (int b = 0; b < N; b++) {
            cin >> c[a][b];
        }
    }
    int ans = 0;
    for (int a = 0; a < N-1; a++) {
        for (int b = 0; b < N-1; b++) {
            if (c[a][b] + c[a+1][b+1] != c[a][b+1] + c[a+1][b]) ans++;
        }
    }
    if (ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
