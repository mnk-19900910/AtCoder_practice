#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
    int N, M; cin >> N >> M;
    int left = 1, right = N;
    for (int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b;
        left = max(left, a);
        right = min(right, b);
    }
    cout << max(right - left + 1, 0) << endl;
}