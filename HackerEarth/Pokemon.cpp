#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc,char **argv)
{
    ll t;
    cin>>t;
    ll ans[t];
    ll k=0;
    while(t--)
    {
        ll n;
        cin>>n;
        ll store[n][2];
        for(ll i=0;i<n;i++)
            cin>>store[i][0]>>store[i][1];
        int bagcnt=0;
        ll bag[n+1];
        for(ll p=1;p<=n;p++)
            bag[p]=0;
        for(ll i=0;i<n;i++)
        {
                if(store[i][0]!=store[i][1])
                {
                       if(bag[store[i][1]]==0) //not available in the store
                       {
                           bagcnt++;
                           bag[store[i][0]]=1;
                       }
                       else
                       {
                           bag[store[i][1]]=0;
                           bag[store[i][0]]=1;
                       }
                }
        }
        ans[k++]=bagcnt;
    }
    for(ll i=0;i<k;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}
