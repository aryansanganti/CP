#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool hasBeautifulPair = false;

        for (int i = 0; i < n - 1; ++i) {
            if (abs(a[i] - a[i + 1]) <= 1) {
                hasBeautifulPair = true;
                break;
            }
        }

        if (hasBeautifulPair) {
            cout << 0 << endl;
        } else if (n == 2) {
            cout << -1 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}
