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

        int maxVal = a[n - 1];
        long long ans = 0;

        for (int k = 2; k < n; ++k) {
            int target = maxVal - a[k]; 
            int j = k - 1;

            for (int i = 0; i < j; ++i) {
                while (i < j && a[i] + a[j] <= target)
                    j--;

                if (i >= j)
                    break;

                ans += (j - i);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
