#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc,char **argv)
{
    ll t;
    cin>>t;
    vector<ll> ans;
    for(ll i=0;i<t;i++)
    {
        ll a,b,c,k,x;
        cin>>a>>b>>c>>k;
        x=0;
        while(x<100000)
        {
            if((a*x*x+x*b+c)>=k)
            {
               ans.push_back(x);
                break;
            }
            x++;
          }
}
   for(ll i=0;i<t;i++)
        cout<<ans[i]<<"\n";

   return 0;
}
