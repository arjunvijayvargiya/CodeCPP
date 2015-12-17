#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n,m;
        cin>>n>>m;
        set<ll> st;
        for(ll j=0;j<n;j++)
        {
            ll x;
            cin>>x;
            st.insert(x);
        }
        for(ll j=0;j<m;j++)
        {
            ll x;
            cin>>x;
            if(st.count(x)==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            st.insert(x);
        }
    }
    return 0;
}
