#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,s,t;
  cin>>t;
  while (t--)
  {
      cin>>n>>s;
      int a[n];
      for (int i = 0; i < n; i++)
      {
          cin>>a[i];
        }
    cout<<min(abs(s-a[0])+a[n-1]-a[0],abs(s-a[n-1])+a[n-1]-a[0])<<endl;
}

    
}
