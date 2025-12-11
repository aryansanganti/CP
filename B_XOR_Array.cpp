#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<long long> a(n + 1, 1);

        int k = r - l + 1;

        // If k is even → fill segment with 1
        if (k % 2 == 0) {
            for (int i = l; i <= r; i++) a[i] = 1;
        } 
        else {
            // k is odd → use powers of two then last = XOR of previous
            long long xr = 0;
            long long val = 1;

            for (int i = l; i < r; i++) {
                a[i] = val;
                xr ^= val;
                val <<= 1;
                if (val > 1000000000) val = 1;  // safety wrap (never needed)
            }

            // last element ensures XOR is zero
            a[r] = xr;
            if (a[r] == 0) a[r] = 1; // just in case, never happens
        }

        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
