#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<string> v;
    ll len=-1;
    for(ll i=0;i<n;i++)
    {
        string str;
        cin>>str;
        v.push_back(str);
        if(str.length()>len)
            len=str.length();
    }
    ll mp[len][26];
    memset(mp,0,sizeof(mp));
    ll cnt=0;
    //mp[0][v[1][1]-'a'];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<v[i].size();j++)
        {
            if(mp[j][v[i][j]-'a']!=1)
             {
                 mp[j][v[i][j]-'a']=1;
                 cnt++;
             }
        }
    }
    cout<<cnt+1;
    return 0;
}
