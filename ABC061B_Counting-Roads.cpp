#include <iostream>
#include <string>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    int a[M], b[M];
    for (int i = 1; i <= M; i++) cin >> a[i] >> b[i];
    int box[100] = {};
    for (int i = 1; i <= M; i++) {
        box[a[i]]++;
        box[b[i]]++;
    }
    for (int i = 1; i <= N; i++) cout << box[i] << endl; 
    return 0;
}
