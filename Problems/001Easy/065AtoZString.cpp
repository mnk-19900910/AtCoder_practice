#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    double z_max,a_min;
    for (int i = 0; i < s.length(); i++) {
        if (s[i]=='A') {
            a_min = i;
            break;
        }
    }
    for (int i = s.length(); i > 0; i--) {
        if (s[i]=='Z') {
            z_max = i;
            break;
        }
    }
    cout << z_max - a_min +1 << endl;
    return 0;
}