#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    ll sum = 0, ans1 = 0, ans2 = 0;
    rep(i, n) {
        sum += a[i];
        if (i%2 == 0 && sum <= 0) {
            ans1 += 1 + abs(sum);
            sum = 1;
        }
        if (i%2 == 1 && sum >= 0) {
            ans1 += 1 + abs(sum);
            sum = -1;
        }
    }
    sum = 0;
    rep(i, n) {
        sum += a[i];
        if (i%2 == 1 && sum <= 0) {
            ans2 += 1 + abs(sum);
            sum = 1;
        }
        if (i%2 == 0 && sum >= 0) {
            ans2 += 1 + abs(sum);
            sum = -1;
        }
    }
    cout << min(ans1, ans2) << endl;
}