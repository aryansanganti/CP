#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,c=0;
  cin>>n;
  int arr[n][2];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2; j++)
    {
        cin>>arr[i][j];
    }
    
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
        if (arr[i][0]==arr[j][1])
        {
            c++;
        }
        
    }
    
  }
  
  cout<<c<<endl;
    
}
