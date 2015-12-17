#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll cnt;
ll valid(string str)
{
    ll flag=1;
    for(ll i=0;str[i+1]!='\0';i++)
    {
          if(str[i]=='p' && str[i+1]=='p')
          {
                flag=0;
                break;
          }
    }
    return flag;
}
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, ll l, ll r)
{
   ll i;
   if (l == r)
    {

        if(valid(a))
         {
             //cout<<a<<"\n";
             cnt++;
         }
    } //printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}
int main(int argc,char ** argv)
{  ll t;
     cin>>t;
     ll arr[t];
     for(ll p=0;p<t;p++)
        cin>>arr[p];
     ll ans[t];
     ll g=0;
     while(t--)
     {
      ll col=arr[g];
      cnt=0;
     for(ll i=1;i<=col/2+1;i++)
     {
         //char str[]="n";
         char str[col];
         for(ll j=0;j<col;j++)
             str[j]='n';
         for(ll j=0;j<i;j++)
            str[j]='p';
         //cout<<str<<"\n";
         char *ptr=str;
         permute(ptr, 0, col-1);
     }
     if(arr[g]==1)
        ans[g]=4;
     else
     { ll q=cnt/2+1;
        ans[g]=q*q;
     }
     cnt=0;
     g++;
     }
     for(ll i=0;i<g;i++)
        cout<<ans[i]<<"\n";
     return 0;
}
