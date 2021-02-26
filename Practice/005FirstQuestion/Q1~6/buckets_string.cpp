#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    cin >> S;
    int box[26] = {};
    for (int i = 0; i < S.size(); i++) box[S[i] - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (box[i] == 0) {
            cout << (char)('a' + i) << endl;
            return 0;
        }
    }
    cout << "None" << endl; 
    return 0;
}
