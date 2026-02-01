#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> a = {x1, x2, x3};
    sort(a.begin(), a.end());

    int meet = a[1];

    int distance = abs(a[0] - meet) + abs(a[2] - meet);

    cout << distance;
    return 0;
}
