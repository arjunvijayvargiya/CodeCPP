#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    ll ans[t];
    for(ll i=0;i<t;i++)
    {
         ll n;
         cin>>n;
         ll arr1[n];
         ll arr2[n];
         for(ll j=0;j<n;j++)
         {
             cin>>arr1[j];
         }
         for(ll j=0;j<n;j++)
         {
             cin>>arr2[j];
         }
         vector<pair<int,int>> v;
         for(ll j=0;j<n;j++)
         {
             v.push_back(make_pair(arr1[j],arr1[j]+arr2[j]));
         }
         priority_queue<int,vector<int>,greater<int>> p;
         p.push(v[0].second);
         ll cnt=1;
         for(ll j=1;j<v.size();j++)
         {
             ll d=p.top();
             ll k=v[j].first;
             if(k>=d)
             {
                 p.pop();
                 p.push(v[j].second);
             }
             else
             {
                 cnt++;
                 p.push(v[j].second);
             }
         }
         ans[i]=cnt;
    }
    for(ll i=0;i<t;i++)
        cout<<ans[i]<<endl;
    return 0;
}
