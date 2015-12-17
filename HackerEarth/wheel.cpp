#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    vector<ll> ans[t];
    for(ll i=0;i<t;i++)
    {
        string str;
        cin>>str;
        for(ll j=0;str[j]!='\0';j++)
        {
              char ch=str[j];
              ll ab=(long long)(ch-'a');
              if(ab>13)
              {
                  ans[i].push_back(-1*(25-ab+1));
              }
              else
              {
                  ans[i].push_back(ab);
              }
        }
    }
    for(ll i=0;i<t;i++)
    {
        for(ll j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" " ;
        }
        cout<<"\n";
    }
    return 0;
}
