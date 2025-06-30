#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int arr[m];
  int min=INT_MAX;
  for (int i = 0; i < m; i++)
  {
    cin>>arr[i];
  }
    
  sort(arr,arr+n);

  cout<<min<<endl;
}
