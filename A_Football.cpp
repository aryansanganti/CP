#include <bits/stdc++.h>
using namespace std;

int main() {
    string players;
    cin >> players;
    if (players.size() < 7) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i <= players.size() - 7; i++) {
        string x = players.substr(i, 7);
        if (x == "0000000" || x == "1111111") {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
