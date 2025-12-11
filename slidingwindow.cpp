#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> arr;
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    /* code */
    int num;
    cin>>num;
    arr.push_back(num);
  }
  int k;
  cin>>k;
  int count=1;
  int currSum=INT_MIN;
  for (int i = 0; i < n; i++)
  {
    /* code */
    count++;
    currSum+=arr[i];
    if (currSum==k)
    {
        cout<<count;
    }
  }
  if (currSum!=k)
  {
    /* code */
    cout<<0;
  }
  
  
  

}
