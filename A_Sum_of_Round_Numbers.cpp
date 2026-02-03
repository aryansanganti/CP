#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;
        int place = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                ans.push_back(digit * place);
            }
            place *= 10;
            n /= 10;
        }

        cout << ans.size() << "\n";
        for (int x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}



//5009
//5000 9 

/* 9876
9000
800
70
6*/
