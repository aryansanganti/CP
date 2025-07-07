#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ok = false;
        int x = 0, y = 0;

        for (int i = 0; i < n && !ok; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    x = i;
                    y = j;
                    ok = true;
                    break;
                }
            }
        }

        if (!ok) {
            cout << "NO\n";
        } else {
            cout << "YES\n2\n" << a[x] << " " << a[y] << "\n";
        }
    }

    return 0;
}
