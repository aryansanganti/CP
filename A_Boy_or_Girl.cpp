#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
set<char> distinct_chars(s.begin(), s.end());
if (distinct_chars.size()%2==0){
    cout<<"CHAT WITH HER!";
}
else{
    cout<<"IGNORE HIM!";
}
}
