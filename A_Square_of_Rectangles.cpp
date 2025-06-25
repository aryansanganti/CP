#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool can_form_square(int l1, int b1, int l2, int b2, int l3, int b3) {

    if (b1 == b2 && b2 == b3) {
        int S = l1 + l2 + l3;
        if (S == b1)
            return true;
    }
    if (l1 == l2 && l2 == l3) {
        int S = b1 + b2 + b3;
        if (S == l1)
            return true;
    }
    int S = max({l1, l2, l3, b1, b2, b3});
    if (b1 == b2 && l1 + l2 == S && b3 + b1 == S && l3 == S)
        return true;
    if (b1 == b3 && l1 + l3 == S && b2 + b1 == S && l2 == S)
        return true;
    if (b2 == b3 && l2 + l3 == S && b1 + b2 == S && l1 == S)
        return true;
    if (l1 == l2 && b1 + b2 == S && l3 + l1 == S && b3 == S)
        return true;
    if (l1 == l3 && b1 + b3 == S && l2 + l1 == S && b2 == S)
        return true;
    if (l2 == l3 && b2 + b3 == S && l1 + l2 == S && b1 == S)
        return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        if (can_form_square(l1, b1, l2, b2, l3, b3))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}