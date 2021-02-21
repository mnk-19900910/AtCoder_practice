#include <iostream>
using namespace std;
int funcKaibun(int i) {
    int x[5], count = 0;
    for (int a = 0; a < 5; a++) {
        x[a] = i % 10;
        i /= 10;
    }
    if (x[0] == x[4] && x[1] == x[3]) count++;
    return count;
}

int main() {
    int A, B;
    cin >> A >> B;
    int ans = 0;
    for (int i = A; i <= B; i++) ans += funcKaibun(i);
    cout << ans << endl;
    return 0;
}