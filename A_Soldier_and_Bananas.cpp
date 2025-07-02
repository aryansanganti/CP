#include <bits/stdc++.h>
using namespace std;

int main(){
  int k,n,w;
  cin>>k>>n>>w;
  int sum=INT_MAX;
  
  for (int i = 0; i <=w; i++)
  {
    sum+=k*i;
  }

  cout<<sum-n;
  
}