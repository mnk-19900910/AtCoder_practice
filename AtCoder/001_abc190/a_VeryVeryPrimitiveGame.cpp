#include <iostream>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if (C==0) {
      if (A - B >= 1) cout << "Takahashi" << endl;
      else cout << "Aoki" << endl;
    }
    else {
      if (B - A >= 1) cout << "Aoki" << endl;
      else cout << "Takahashi" << endl;
    }
    return 0;
}
