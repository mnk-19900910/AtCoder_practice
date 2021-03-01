#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < n; ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INFll = 1LL << 60;
const int INF = 100100100;
int h,w;
// 0: 下、1: 右、2: 上、3: 左、4: 右下、5: 右上、6: 左上、7: 左下
vector<int> dx = {1, 0, -1, 0, 1, -1, -1, 1};
vector<int> dy = {0, 1, 0, -1, 1, 1, -1, -1};
int main() {
    cin >> h>>w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    for(int i=0; i < h; ++i){
        for(int j=0; j < w; ++j){
            if(s[i][j]!='.') continue;
            int tmp=0;
            for(int d=0; d < 8; ++d){
                int ni=i+dx[d], nj=j+dy[d];
                if(ni<0 || ni>=h || nj<0 || nj>=w) continue;
                if(s[ni][nj]=='#')tmp++;
            }
            s[i][j]=(char)('0'+tmp);
        }
    }
    for(int i=0; i < h; ++i) cout << s[i] << endl;
}