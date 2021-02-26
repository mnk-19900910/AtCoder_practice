#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
const int MAX_N = 110000;

int dp[MAX_N]; // dp[i] が i についての答え
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < MAX_N; ++i) dp[i] = N; // INF の気持ち
    dp[0] = 0;
    for (int n = 0; n < N; ++n) {
        for (int pow6 = 1; n + pow6 <= N; pow6 *= 6) {
            dp[n + pow6] = min(dp[n + pow6], dp[n] + 1);
        }
        for (int pow9 = 1; n + pow9 <= N; pow9 *= 9) {
            dp[n + pow9] = min(dp[n + pow9], dp[n] + 1);
        }
    }
    cout << dp[N] << endl;
}