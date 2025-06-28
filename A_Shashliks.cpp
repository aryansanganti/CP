#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        long long count = 0;

        while (k >= a || k >= b) {
            if (k >= a && k >= b) {
                if (x * 1LL >= y) {
                    long long steps = (k - b + y) / y;
                    steps = max(1LL, steps);
                    k -= steps * y;
                    count += steps;
                } else {
                    long long steps = (k - a + x) / x;
                    steps = max(1LL, steps);
                    k -= steps * x;
                    count += steps;
                }
            } else if (k >= a) {
                long long steps = (k - a + x) / x;
                steps = max(1LL, steps);
                k -= steps * x;
                count += steps;
            } else if (k >= b) {
                long long steps = (k - b + y) / y;
                steps = max(1LL, steps);
                k -= steps * y;
                count += steps;
            } else {
                break;
            }
        }

        cout << count << endl;
    }
}
