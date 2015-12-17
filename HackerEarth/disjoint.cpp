#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool ans[100001];
ll parent[100001];
ll edges[100001][2];
ll find1(ll u)
{
     if(parent[u]!=u)
     {
         parent[u]=find1(parent[u]);
     }
     return parent[u];
}
bool merge1(ll a,ll b)
{
     a=find1(a);
     b=find1(b);
     if(a==b)
          return false;
    parent[a]=b;
    return true;
}
int main()
{  ll n,m;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
        parent[i]=i;
    for(ll i=0;i<m;i++)
        cin>>edges[i][0]>>edges[i][1];
    cout<<m-n+1<<endl;
    for(ll i=m-1;i>=0;i--)
    {
         ans[i]=!merge1(edges[i][0],edges[i][1]);
    }
    for(ll i=0;i<m;i++)
    {
        if(ans[i])
            cout<<i+1<<endl;
    }
    return 0;
}
