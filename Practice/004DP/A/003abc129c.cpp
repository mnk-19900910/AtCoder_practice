#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int N, M;
vector<bool> issafe; 
int main() {
    cin >> N >> M;
    issafe.assign(N+1, true);
    for (int i = 0; i < M; ++i) {
        int a; cin >> a;
        issafe[a] = false;
    }
    vector<int> dp(N+1, 0); 
    dp[0] = 1;
    if (issafe[1]) dp[1] = 1;
    for (int n = 2; n <= N; ++n) {
        if (issafe[n-1]) dp[n] += dp[n-1];
        if (issafe[n-2]) dp[n] += dp[n-2];
        dp[n] %= MOD;
    }
    cout << dp[N] << endl;
}
