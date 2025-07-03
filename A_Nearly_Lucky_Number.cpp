#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    int lucky_count = 0;
    for (char c : n) {
        if (c == '4' || c == '7') lucky_count++;
    }
    if (lucky_count == 0) {
        cout << "NO";
        return 0;
    }
    string count_str = to_string(lucky_count);
    for (char c : count_str) {
        if (c != '4' && c != '7') {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
