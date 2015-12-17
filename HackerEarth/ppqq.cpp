#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n,k;
        cin>>n>>k;
        priority_queue<ll> p;
        for(ll j=0;j<n;j++)
        {
            ll x;
            cin>>x;
            p.push(x);
        }
        ll sum=0;
        for(ll j=0;j<k;j++)
        {
            sum=sum+p.top();
            ll q=p.top();
            p.pop();
            p.push(q/2);
        }
        cout<<sum<<endl;
    }
    return 0;
}
