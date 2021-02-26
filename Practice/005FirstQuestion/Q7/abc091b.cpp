#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    int N,M;
    cin >> N;
    int s[N];
    map<string, int> ma;
    for (int i = 1; i <= N; i++) {
        string S;
        cin >> S;
        ma[S]++;
    }
    cin >> M;
    for (int i = 1; i <= M; i++) {
        string S;
        cin >> S;
        ma[S]--;
    }
    int ans = 0;
    for (auto a : ma) ans = max(ans, a.second);
    cout << ans << endl; 
    return 0;
}
