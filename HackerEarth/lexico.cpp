#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<char,ll> mp;
bool compare1(string str1,string str2)
{ ll i=0;
   ll j=0;
   ll flag=0;
   while(i<str1.length() && j<str2.length())
  {
       if(mp[str1[i]]>mp[str2[j]])
       {
           flag=1;
           break;
       }
       else if(mp[str1[i]]<mp[str2[j]])
       {
           flag=2;
           break;
       }
  }
  if(flag==1)
    return false;
  if(flag==2)
    return true;
  if(flag==0 && i<j)
    return true;
  else
    return false;
}
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        string str;
        cin>>str;
        for(ll j=0;j<str.length();j++)
            mp[str[j]]=j;
        ll n;
        cin>>n;
        string stx[n];
        for(ll j=0;j<n;j++)
            cin>>stx[j];
        sort(stx,stx+n,compare1);
        for(ll j=0;j<n;j++)
            cout<<stx[j]<<endl;
            mp.clear();
    }
    return 0;
}
