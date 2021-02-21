#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int box[26] = {};
    for (int i = 0; i < s.size(); i++) box[s[i] - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (box[i]%2) {cout << "No" << endl; return 0;}
    }
    cout << "Yes" << endl;
}
