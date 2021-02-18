#include <bits/stdc++.h>
using namespace std;
#define N 101
int memo[N]={};
int fib2(int n){
    if(n<=1) return 1;
    else {
        if(memo[n]==0) memo[n]=fib2(n-1)+fib2(n-2);
        return memo[n];
    }
}
int main(){
    int n=30;
    cout << "n= "<<n <<" のとき "<<fib2(n)  << endl;
}