#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> x;
    vector<ll> y;
    for(ll i=0;i<m;i++)
    {ll x1,y1;
        cin>>x1>>y1;
        if(!((x1==1 && y1==1) || (x1==1 && y1==n) || (x1==n && y1==1) || (x1==n && y1==n) ))
       {
         x.push_back(x1);
         y.push_back(y1);
       }
    }
    ll moves=0;
    for(ll i=0;i<x.size();i++)
    {cout<<x[i]<<" "<<y[i]<<endl;
          ll dist1=fabs(x[i]-1)+fabs(y[i]-1);
          ll dist2=fabs(x[i]-1)+fabs(y[i]-n);
          ll dist3=fabs(x[i]-n)+fabs(y[i]-n);
          ll dist4=fabs(x[i]-n)+fabs(y[i]-1);
          moves=moves+min(min(dist1,dist2),min(dist3,dist4));
    }
    cout<<moves;
    return 0;
}