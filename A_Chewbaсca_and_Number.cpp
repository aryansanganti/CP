#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++) {
        int d = x[i] - '0';
        int inverted = 9 - d;

        if (i == 0) {
            if (inverted < d && inverted != 0)
                x[i] = inverted + '0';
        } else {
            x[i] = min(d, inverted) + '0';
        }
    }

    cout << x << endl;
    return 0;
}

