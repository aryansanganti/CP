#include <bits/stdc++.h>
using namespace std;

int main(){
  /*
  Learning Modulo
  What is Modulo Arthimetic  ,Modulo M ?
  */  

  /*
  Given N print its Factorial 
  overflow horaha 21 me 
  tho modulo me answer do aisa question me rahega 
  tho Modulo kuch bhi lelo like 47
  A % M 
  jho bhi answer ayega vo M se chota hoga 
  */

  int n;
  cin>>n;
  int M=47;
  long long fact=1;
  for (int i = 2; i <=n; i++)
  {
    fact=(fact*i) % M;
  }
  cout<<fact;
}
