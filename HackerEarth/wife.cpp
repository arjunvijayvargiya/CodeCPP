#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc,char **argv)
{
    ll t;
    cin>>t;
    string ans[t];
    for(ll i=0;i<t;i++)
    {  ll n,x;
        cin>>n>>x;
        set<ll> st;
        for(ll j=0;j<n;j++)
        {
             ll k;
             cin>>k;
             st.insert(k);
        }
        if(st.size()>x)
            ans[i]="lame husband";
        else if(st.size()<x)
            ans[i]="bad husband";
        else
            ans[i]="perfect husband";
    }
    for(ll i=0;i<t;i++)
        cout<<ans[i]<<"\n";
    return 0;
}
