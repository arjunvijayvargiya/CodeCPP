#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char** argv)
{
    /*vector<pair<ll,ll>> v;
    pair<ll,ll> p=make_pair(11,2);
    v.push_back(p);
    cout<<v[0].first;
    */
    ll t;
    cin>>t;
    ll ans[t];
    for(ll i=0;i<t;i++)
    {
        ll s;
        cin>>s;
        vector<ll> v1;
        vector<ll> v2;
        for(ll j=0;j<s;j++)
        {
            ll q,w;
            cin>>q>>w;
            v1.push_back(q);
            v2.push_back(w);
        }
        set<pair<ll,ll>> sst;
        ll cnt=0;
        ll maxsum=-1;
        for(ll j=0;j<s;j++)
        {//cout<<"cnt:"<<cnt<<"maxsum:"<<maxsum<<"\n";
            pair<ll,ll> p=make_pair(v1[j],v2[j]);
            auto k=sst.find(p);
            if(k==sst.end())
           {//cout<<"inserting:"<<p.first<<","<<p.second<<"\n";
                   sst.insert(p);
           }
            else
            {//cout<<"inside radar\n";
                if(cnt>0)
                   cnt--;
            }
            if(v2[j]==1)
            {
                cnt++;
            }
            else
            {
                if(cnt>maxsum)
                    maxsum=cnt;
                cnt=0;
            }
        }
        if(cnt>maxsum)
            maxsum=cnt;
        ans[i]=maxsum;
    }
    for(ll i=0;i<t;i++)
        cout<<ans[i]<<"\n";

    return 0;
}
