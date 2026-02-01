#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinkToasts = (k * l) / nl;
    int limeToasts = c * d;
    int saltToasts = p / np;

    int result = min({drinkToasts, limeToasts, saltToasts}) / n;
    cout << result;

    return 0;
}
