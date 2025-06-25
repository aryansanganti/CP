#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    vector<pair<ll, ll>> v;

    for (int i = 0; i < t; i++) {
        ll x;
        cin >> x;
        v.emplace_back(x, i+1); 
    }

    sort(v.begin(), v.end()); 

    for (int i = 0; i < t; i++) {
        cout << v[i].second << " "; 
    }
    cout << endl;

    return 0;
}
