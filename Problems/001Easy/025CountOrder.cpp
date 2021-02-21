#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int num_p,num_q,cnt=0;
  vector<int> p(n),q(n),c(n);
  for(int i=0;i<n;i++)cin>>p[i];
  for(int i=0;i<n;i++)cin>>q[i];
  for(int i=1;i<=n;i++)c[i-1]=i;
  do{
    cnt++;
    if(c==p) num_p=cnt;    
    if(c==q) num_q=cnt;
  }while(next_permutation(c.begin(),c.end()));
  cout<<abs(num_p-num_q)<<endl;
}
