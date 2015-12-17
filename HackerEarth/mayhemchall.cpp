#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool pair_compare(const std::pair<ll,ll>& firstElem, const std::pair<ll,ll>& secondElem) {
  return firstElem.first > secondElem.first;
}
int main(int argc, char** argv)
{
    ll t;
    cin>>t;
    ll ans[t];
    for(ll i=0;i<t;i++)
    {
          ll n;
          cin>>n;
          vector<ll> v1;
          vector<ll> v2;
          vector<pair<ll,ll>> vp;
          for(ll j=0;j<n;j++)
          {ll q,w;
               cin>>q>>w;
               v1.push_back(q);
               v2.push_back(w);
               pair<ll,ll> p=make_pair(q-w,j);
               vp.push_back(p);
          }
         sort(vp.begin(),vp.end(),pair_compare);
          for(ll j=0;j<n;j++)
          {
                 cout<<vp[j].first<<","<<vp[j].second<<"\n";
          }
          ll pos=0;
          ll neg=0;
          for(ll j=0;j<n;j++)
          {
              if(j==vp[0].second || vp[1].second)
                  pos+=v1[j];
              else
                  neg+=v2[j];
          }
          ans[i]=pos-neg;
    }
    for(ll i=0;i<t;i++)
        cout<<ans[i]<<"\n";
    return 0;
}
