#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    set<vector<ll>> s;
    ll cnt=0;
    for(ll i=0;i<t;i++)
    {
        vector<ll> temp;
        ll a,b,c;
        cin>>a>>b>>c;
        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(c);
        sort(temp.begin(),temp.end());
        auto it=s.find(temp);
        if(it==s.end())
            s.insert(temp);
        else
            cnt++;
    }
    cout<<(t-(cnt*2));
    return 0;
}
