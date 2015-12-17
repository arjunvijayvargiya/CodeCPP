#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main(int argc, char **argv)
{
    ll t;
    cin>>t;
    ll j=0;
    vector<ll> costly;
    while(j<t)
    {
    ll n,q;
    cin>>n>>q;
    vector<ll> v;
    for(ll i=0;i<n;i++)
     {ll x;
        cin>>x;
        v.push_back(x);
     }
     sort(v.begin(),v.end());
     ll cost=0;
     for(ll i=0;i<n-1;i++)
     {
         cost=cost+(q*(v[i+1]-v[i]));
     }
     costly.push_back(cost);
     j++;
    }
     for(ll i=0;i<t;i++)
       cout<<costly[i]<<"\n";
    return 0;
}
