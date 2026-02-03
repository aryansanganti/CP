#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    bool hard = false;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            hard = true;
        }
    }

    if (hard)
        cout << "HARD";
    else
        cout << "EASY";

    return 0;
}
