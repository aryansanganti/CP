#include <bits/stdc++.h>
using namespace std;

int main(){
    string p;
    cin>>p;
    for (int i=0;i<p.size();i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            cout << "YES"<<endl;
            return 0;
        }
    }
    cout << "NO"<<endl;

}
