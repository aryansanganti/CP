#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n, j_idx, k;
        cin >> n >> j_idx >> k;
        vector<int> a(n);
        int max_s = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] > max_s) {
                max_s = a[i];
            }
        }
        j_idx--;
        if (k >= 2) {
            cout << "YES" << endl;
        } else if (a[j_idx] == max_s) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
}
