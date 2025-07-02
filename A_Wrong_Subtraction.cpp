#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    while (k--)
    {
        int lastdigit=n%10;
        // cout<<lastdigit<<endl;
        if (lastdigit==0)
        {
            n=n/10;
        }
        else
        {
            n-=1;
        }

    }
    
    cout<<n;
    
    
}
