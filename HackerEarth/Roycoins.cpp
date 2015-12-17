#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll start[n+1];
    ll end1[n+1];
    memset(start,0,sizeof(start));
    memset(end1,0,sizeof(end1));
    for(ll i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        start[x]++;
        end1[y]++;
    }
    ll coin[n+1];
    ll lend=0;
    ll lstart=0;
    for(ll i=1;i<=n;i++)
    {   lstart=lstart+start[i];
        coin[i]=lstart-lend;
        lend=lend+end1[i];
        //cout<<coin[i]<<endl;
    }
    //cout<<"**********************************************"<<endl;
   ll days[m+1];
   memset(days,0,sizeof(days));
    for(ll i=1;i<=n;i++)
    {
        days[coin[i]]++;

    }
    /*for(int i=1;i<=m;i++)
        cout<<"day"<<i<<days[i]<<endl;
    */
    ll rsum[m+1];
    memset(rsum,0,sizeof(rsum));
    rsum[m]=days[m];
    for(ll i=m-1;i>=1;i--)
    {
        rsum[i]=days[i]+rsum[i+1];
        //cout<<"rsum["<<i<<"]"<<rsum[i]<<endl;
    }

    ll q;
    cin>>q;
    ll ans[q];
    for(ll i=0;i<q;i++)
    {
        ll x;
        cin>>x;
        if(x>m)
            ans[i]=0;
        else
           ans[i]=rsum[x];
    }
    for(ll i=0;i<q;i++)
        cout<<ans[i]<<endl;

    return 0;
}
