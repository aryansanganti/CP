#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
    while (true) {
        n++;
        int x = n;
        set<int> digits;
        while (x) {
            digits.insert(x % 10);
            x /= 10;
        }
        if (digits.size() == 4) {
            cout << n << endl;
            break;
        }
    }
}
