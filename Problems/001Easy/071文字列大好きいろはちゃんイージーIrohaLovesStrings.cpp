#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
    int N, L;
    cin >> N >> L;
    string s[100];
    for (int i = 0; i < N; i++) cin >> s[i];
    sort(s, s+N);
    for (int i = 0; i < N; i++) cout << s[i];
    return 0;
}