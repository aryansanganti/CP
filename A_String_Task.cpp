#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ns;
    for(auto x:s){
        ns.push_back((char)tolower(x));
    } 

    ns.erase(remove_if(ns.begin(), ns.end(), [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
    }), ns.end());

    for (char c : ns) {
        cout << '.' << c;
    }
    cout << '.' << endl;
}
