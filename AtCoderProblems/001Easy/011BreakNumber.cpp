#include <iostream>
using namespace std;


int main() {
    int N;
    cin >> N;
    int count_max=0;
    int max = 1;

    for (int i = 1; i < N+1; i++) {
       int count = 0;
       int p=i;
       while (p%2 == 0) {
         p /= 2;
         count++;
       }
       if(count>count_max) {
         count_max=count;
         max=i;
       }
    }
    
   cout << max << endl;
}