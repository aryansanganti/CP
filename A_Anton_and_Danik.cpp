#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a = 0, d = 0;
    cin >> n;
    char c;

    while(n--){
        cin >> c;
        if (c == 'A')
        {
            a++;
        }
        else if(c == 'D'){
            d++;
        }
    }
    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";
}
