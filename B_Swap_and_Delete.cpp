#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }

        int pref0 = 0, pref1 = 0;
        int L = 0;

        for (char c : s) {
            if (c == '0') pref0++;
            else pref1++;

            if (pref1 <= count0 && pref0 <= count1) {
                L++;
            } else {
                break;
            }
        }

        cout << s.size() - L << "\n";
    }

    return 0;
}
