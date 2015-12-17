#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll n;
   cin>>n;
   vector<pair<ll,ll>> v;
   map<ll,ll> mp;
   for(ll i=0;i<n;i++)
   {
       ll id,z,p,l,c,s;
       cin>>id>>z>>p>>l>>c>>s;
       v.push_back(make_pair(50*p+5*l+10*c+20*s-z,id));
       mp[id]=z;
   }
   make_heap(v.begin(),v.end());
   ll i=1;
   while(i<=5)
   {
         pair<ll,ll> ptemp=v.front();
         cout<<ptemp.second<<" "<<mp[ptemp.second]+ptemp.first<<endl;
         pop_heap(v.begin(),v.end());
         v.pop_back();
         i++;
   }
   return 0;
}
