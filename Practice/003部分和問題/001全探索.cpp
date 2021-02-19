#include <bits/stdc++.h>
using namespace std;
#define N 3 // カードの枚数
#define MAX_NUM 10 // 合計が MAX_NUM になるか

int find_max_saiki(int list[N],int now,int limit) {
    int choice,not_choice;
    if(now >= N ||  limit < 0) return 0; // これ以上追加できないとき or リストの最後尾まで探索終了
    else {
        // 追加 / 追加しない ときの2パターンを考える
        not_choice = find_max_saiki(list,now+1,limit);
        if(list[now] > limit) return not_choice; // now番目を追加できるようなコストがないとき
        else {
            choice = find_max_saiki(list,now+1,limit - list[now]) + list[now];
            if(choice > not_choice) return choice;
            else return not_choice;
        }
    }
}

int main() {
    int list[N] = {4,8,6};
    int ans = find_max_saiki(list,0,MAX_NUM); // 先頭から順に探すので now は0スタート
    printf("%2dに最も近い選び方1：%2d\n",MAX_NUM,ans);
}