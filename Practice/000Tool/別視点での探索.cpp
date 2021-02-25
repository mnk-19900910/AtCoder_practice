// N 桁のラッキーナンバー SS があります。高橋君は、SS から N−3N−3 桁を消して残りの 33 桁を左から順に読んだものを暗証番号として設定することにしました。このとき、設定され得る暗証番号は何通りあるでしょうか。ただし暗証番号は 00 から始まっても良いものとします。
// 制約： 1≤N≤300001≤N≤30000、ラッキーナンバーは '0' ～ '9' までの数字から成る
// 出典： 三井住友信託銀行プログラミングコンテスト2019 D - Lucky PIN

#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int main() {
    int n; string s;
    cin >> n >>s;
    int ans=0;
    for(int i=0; i < 1000; ++i){
        int a[3]={i/100,(i/10)%10,i%10}, x=0;
        for(int j=0; j < n; ++j){
            if(x<=2&&a[x]==(int)(s[j]-'0'))x++;
        }
        if(x==3)ans++;
    }
    cout << ans << endl;
}