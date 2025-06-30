#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,count=0;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    int op1,op2,op3;
    cin>>op1>>op2>>op3;
    if((op1+op2+op3)>=2){
        count+=1;
    }
  }
  cout<<count;
}
