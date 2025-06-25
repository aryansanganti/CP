#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;

        bool canWin = false;

        for (int bob = 1; bob <= 100; bob++) {
            if (bob == a) continue;

            int dBobX = abs(bob - x);
            int dBobY = abs(bob - y);
            int dAliceX = abs(a - x);
            int dAliceY = abs(a - y);

            if (dBobX < dAliceX && dBobY < dAliceY) {
                canWin = true;
                break;
            }
        }

        if (canWin)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
