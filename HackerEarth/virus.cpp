#include<bits/stdc++.h>
#define ll long long
using  namespace std;
int main(int argc, char** argv)
{
    ll t;
    cin>>t;
    vector<ll> v1;
    for(ll i=0;i<t;i++)
    {int x;
      cin>>x;
      v1.push_back(x);
    }
    vector<ll> v2;
    for(ll i=0;i<t;i++)
    {int x;
      cin>>x;
      v2.push_back(x);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    ll cnt=0;
    while(cnt<t)
    {
        if(v1[cnt]<v2[cnt])
           break;
        cnt++;
    }
    if(cnt==t)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
