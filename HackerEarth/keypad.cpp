#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    vector<int> v;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    /*for(ll i=0;i<n;i++)
        cout<<v[i]<<" ";
    */
    ll k;
    cin>>k;
    ll si[k];
    for(ll i=0;i<k;i++)
        cin>>si[i];
    ll cnt[k];
    ll sum=0;
    for(ll i=0;i<k;i++)
        sum=sum+si[i];
    if(sum<v.size())
    {
        cout<<"-1";
        exit(1);
    }
    ll mm=si[0];
    for(ll i=1;i<k;i++)
     {
         if(si[i]>mm)
            mm=si[i];
     }
     ll assignment[k][mm];
    memset(cnt,0,sizeof(cnt));
    ll currstate=0;
    ll i=0;
    while(i<v.size())
    {
        if(cnt[currstate]<si[currstate])
        {
            assignment[currstate][cnt[currstate]]=v[i];
            cnt[currstate]++;
            currstate=(currstate+1)%k;
            i++;
        }
        else
        {
            currstate=(currstate+1)%k;
        }
    }
    ll cal=0;
    for(ll i=0;i<k;i++)
    {
        for(ll j=0;j<si[i];j++)
        {
            //cout<<assignment[i][j]<<" ";
             cal=cal+assignment[i][j]*(j+1);
        }
    }
    cout<<cal;

   return 0;
}
