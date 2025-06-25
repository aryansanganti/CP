#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int count=0;
  cin>>n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin>>x;
    v.push_back(x);
  }
  int minimum = INT_MAX, minipos = -1;
  int maximum = INT_MIN, maxpos = -1;
  for (int i = 0; i < n; i++)
  {
    if (v[i] > maximum)
    {
        maximum = v[i];
        maxpos = i;
    }
    if (v[i] <= minimum)
    {
        minimum = v[i];
        minipos = i;
    }
  }

  int ans;
  if(maxpos<minipos){
    ans=maxpos+(n-1-minipos);
  }
  else
  {
    ans=maxpos+(n-1-minipos)-1;
  }
  
  cout<<ans<<endl;
  
}
