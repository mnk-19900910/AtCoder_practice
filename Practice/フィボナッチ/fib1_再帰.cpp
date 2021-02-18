#include <bits/stdc++.h>
using namespace std;
int fib1(int n){
    if(n<=1) return 1;
    else return fib1(n-1)+fib1(n-2);
}
int main(){
    int n=30;
    cout << "n= "<<n <<" のとき "<<fib1(n)  << endl;
}