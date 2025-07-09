#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> levels;
    int p, q, x;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        cin >> x;
        levels.insert(x);
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> x;
        levels.insert(x);
    }
    if ((int)levels.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}
