#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,mine=0,ans=0;
    cin>>n;
    vector<long long> v1, v2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v1.emplace_back(x);
        sum+=v1[i];
    }
    sort(v1.begin(),v1.end());

    while (sum>=mine)
    {
        mine+=v1[n-1];
        sum-=v1[n-1];
        ans++;
        n--;

    }
    
    cout<<ans<<endl;
    
}
