#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="anagram";
    string t="nagrram";

    unordered_map<char ,int> countS;
    unordered_map<char ,int> countT;

        for(int i =0;i<s.length();i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }

}

