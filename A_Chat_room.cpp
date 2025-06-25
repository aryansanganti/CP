#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int f = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'h') {
            for (int j = i + 1; j < n; j++) {
                if (s[j] == 'e') {
                    for (int k = j + 1; k < n; k++) {
                        if (s[k] == 'l') {
                            for (int l = k + 1; l < n; l++) {
                                if (s[l] == 'l') {
                                    for (int m = l + 1; m < n; m++) {
                                        if (s[m] == 'o') {
                                            f = 1;
                                            break;
                                        }
                                    }
                                    if (f) break;
                                }
                            }
                            if (f) break;
                        }
                    }
                    if (f) break;
                }
            }
            if (f) break;
        }
    }

    if (f == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
