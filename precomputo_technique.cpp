#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];
int main(){
  /*
  Given the Test 
  print n Factorial Optimized 
  Learn Precomputation Technique 
  mostly used for optimization 
  1.Hashing 
  Isme kya kiya phele se he sarre store kardiya fact
  tho loop chalane ke liye zarurat nahi hai
  */  
    fact[0]=fact[1]=1;
    for (int i = 2; i < N; ++i)
    {
        fact[i]=fact[i-1]*i;
    }
    
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    // long long fact =1;
    cout<<fact[n]<<endl;
  }
  
}
