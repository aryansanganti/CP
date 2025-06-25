#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> lucky = {4, 7, 47, 74, 44, 77, 474, 477, 744, 747, 774, 444, 777};
  bool found = false;
  for (int x : lucky) {
    if (n % x == 0) {
      found = true;
      break;
    }
  }
  cout << (found ? "YES" : "NO") << endl;
}
