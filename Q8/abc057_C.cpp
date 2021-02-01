#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int ans = 1;
    long long int A, N;
    cin >> N;
    for (long long int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) A = N / i;
    }
    while (A >= 10) {
        A /= 10;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
