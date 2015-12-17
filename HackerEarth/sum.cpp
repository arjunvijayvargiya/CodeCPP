#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        string  x;
        cin>>x;
        int count, nc = 0, sum = 0;
        for (count = 0; x[count] != '\0'; count++)
    {
        if ((x[count] >= '0') && (x[count] <= '9'))
        {
            nc += 1;
            sum += (x[count] - '0');
        }
    }
    cout<<sum<<endl;
    }
    return 0;
}
