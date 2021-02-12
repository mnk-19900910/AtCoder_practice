#include <iostream>
using namespace std;
int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    C *= 2;
    int ans = min(X, Y) * min(A+B, C);
    if (X - Y > 0) ans += min(A, C) * (X - Y);
    if (Y - X > 0) ans += min(B, C) * (Y - X);
    cout << ans << endl;
    return 0;
}
