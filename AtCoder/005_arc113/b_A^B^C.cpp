#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
typedef long long ll;
int pow2(int b,int c){
    return fmod(pow(b,c),2);
}
int pow4(int b,int c){
    return fmod(pow(b,c),4);
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int x=fmod(a,10);
    if(x==4){
        if(pow2(b,c)==1){cout << 4 << endl; return 0;}
        else{cout << 6 << endl; return 0;}
    }
    if(x==9){
        if(pow2(b,c)==1){cout << 9 << endl; return 0;}
        else{cout << 1 << endl; return 0;}
    }
    if(x==2){
        if(pow4(b,c)==1){cout << 2 << endl; return 0;}
        else if(pow4(b,c)==2){cout << 4 << endl; return 0;}
        else if(pow4(b,c)==3){cout << 8 << endl; return 0;}
        else{cout << 6 << endl; return 0;}
    }
    if(x==3){
        if(pow4(b,c)==1){cout << 3 << endl; return 0;}
        else if(pow4(b,c)==2){cout << 9 << endl; return 0;}
        else if(pow4(b,c)==3){cout << 7 << endl; return 0;}
        else{cout << 1 << endl; return 0;}
    }
    if(x==7){
        if(pow4(b,c)==1){cout << 7 << endl; return 0;}
        else if(pow4(b,c)==2){cout << 9 << endl; return 0;}
        else if(pow4(b,c)==3){cout << 3 << endl; return 0;}
        else{cout << 1 << endl; return 0;}
    }
    if(x==8){//8
        if(pow4(b,c)==1){cout << 8 << endl; return 0;}
        else if(pow4(b,c)==2){cout << 4 << endl; return 0;}
        else if(pow4(b,c)==3){cout << 2 << endl; return 0;}
        else{cout << 6 << endl; return 0;}
    }
    if(x==1||x==5||x==6||x==0){cout << x << endl; return 0;}
}//not ac