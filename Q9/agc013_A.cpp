#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[N+100];
    for (int i = 0; i < N; i++) cin >> A[i];
    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans++;
        while (i + 1 < N && A[i] == A[i+1]) i++;

        if (A[i] < A[i+1]) { //単調増加
            while (i + 1 < N && A[i] <= A[i+1]) i++;
        }
        else { //単調減少
            while (i + 1 < N && A[i] >= A[i+1]) i++;
        }
    }
    cout << ans << endl;
    return 0;
}