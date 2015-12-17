#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n,cur;
        cin>>n>>cur;
        ll arr[n][n];
        for(ll j=0;j<n;j++)
            for(ll k=0;k<n;k++)
                cin>>arr[j][k];
        ll r[n],c[n];
        memset(r,0,sizeof(r));
        memset(c,0,sizeof(c));
        for(ll j=0;j<n;j++)
            for(ll k=0;k<n;k++)
                r[j]=r[j]+arr[j][k];
        for(ll j=0;j<n;j++)
            for(ll k=0;k<n;k++)
                c[j]=c[j]+arr[k][j];
        ll sum=0;
        for(ll j=0;j<cur;j++)
        {
                sort(r,r+n);
                sort(c,c+n);
                if(r[0]<c[0])
                {
                       sum=sum+r[0];
                       r[0]=r[0]+n;
                       for(ll k=0;k<n;k++)
                            c[k]=c[k]+1;
                }
                else
                {
                       sum=sum+c[0];
                        c[0]=c[0]+n;
                        for(ll k=0;k<n;k++)
                            r[k]=r[k]+1;
                }
        }
        cout<<sum<<endl;
    }
    return 0;
}
