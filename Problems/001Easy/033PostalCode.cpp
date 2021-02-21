#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b, ans;
string s;

int main(){
    cin >> a >> b >> s;
    for(int i = 0; i < s.size(); i++){
        if(i == a  && s[a] == '-') ans++;
        else if(i != a && s[i] >= '0' && s[i] <= '9') ans++;
    }
    if(ans == s.size()) cout << "Yes" << endl;
    else cout << "No" << endl;
}