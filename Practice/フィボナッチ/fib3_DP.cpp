#include <bits/stdc++.h>
using namespace std;
#define N 101

int fib3(int n){
    int a[n];
    a[0]=1;a[1]=1;
    for(int i=2; i <= n; i++) a[i]=a[i-1]+a[i-2];
    return a[n];
}
int main(){
    int n=30;
    cout << "n= "<<n <<" のとき "<<fib3(n)  << endl;
}