#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    map<vector<ll>,string> mp;
    ll n,k,l,q;
    cin>>n>>k>>l>>q;
    for(ll i=0;i<n;i++)
    {   vector<ll> temp;
        string str;
        cin>>str;
        for(ll j=0;j<k;j++)
        {ll x;
            cin>>x;
          temp.push_back(x);
        }
        mp[temp]=str;
    }
    for(ll i=0;i<q;i++)
    {
       vector<ll> temp;
        for(ll j=0;j<k;j++)
        {ll x;
            cin>>x;
          temp.push_back(x);
        }
        if(mp.find(temp)==mp.end())
            cout<<""<<endl;
        else
            cout<<mp[temp]<<endl;
    }
    return 0;
}
