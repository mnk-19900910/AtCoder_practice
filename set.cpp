#include <iostream>
#include <set>
using namespace std;
int main() {
    int N;
    cin >> N;
    int d[100];
    for (int i = 0; i < N; i++) cin >> d[i];
    set<int> va;
    for (int i = 0; i < N; i++) va.insert(d[i]);
    cout << va.size() << endl; 
    return 0;
}
