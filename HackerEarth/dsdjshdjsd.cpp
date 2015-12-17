#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;

    for(ll i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        ll sum=0;
        for(ll j=0;j<n;j++)
        {  ll x;
            cin>>x;
            sum=sum+x;
        }
        if(sum%n==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
