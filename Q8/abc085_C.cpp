#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    int N, Y;
    cin >> N >> Y;
    int ans10000 = -1, ans5000 = -1, ans1000 = -1;
    for (int a = 0; a <= N; a++) {
        for (int b = 0; b <= N - a; b++) {
            int c = N - a - b;
            int total = 10000*a + 5000*b + 1000*c;
            if (total == Y) {
                ans10000 = a;
                ans5000 = b;
                ans1000 = c;
            }
        }
    } 
    cout << ans10000 << " " << ans5000 << " " << ans1000 << endl; 
    return 0;
}
