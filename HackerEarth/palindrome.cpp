#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str;
void update(ll l,char x)
{
     str[l-1]=x;
}
int check(ll l,ll r)
{   l=l-1;
    r=r-1;
    if((l-r)==0)
        return 1;
    int alpha[26];
    memset(alpha,0,sizeof(alpha));
    for(ll i=l;i<=r;i++)
          alpha[str[i]-'a']++;
    /*for(ll i=0;i<26;i++)
          cout<<alpha[i]<<" ";
    cout<<endl;*/
     ll odd=0;
     ll even=0;
     for(ll i=0;i<26;i++)
     {
         if(alpha[i]%2!=0)
             odd++;
        else
             even++;
     }
     if(odd>1)
        return 0;
    else
        return 1;
}
int main()
{
    ll n,q;
    cin>>n>>q;
    cin>>str;
    string ans[q];
    for(ll i=0;i<q;i++)
    {  ll t,l,r;
        char x;
        cin>>t;
         if(t==1)
         {
              cin>>l;
              cin>>x;
              update(l,x);
         }
         else
         {
             cin>>l;
             cin>>r;
             if(check(l,r))
                 ans[i]="yes";
            else
                 ans[i]="no";
         }
    }
    for(ll i=0;i<q;i++)
    {if(ans[i].length()>0)
        cout<<ans[i]<<endl;
    }
    return 0;
}
