#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   string str1,str2;
   cin>>str1>>str2;
   stack<ll> stk1,stk2;
   for(ll i=0;i<str1.length();i++)
   {
       stk1.push((ll)(str1[i]-'0'));
   }
    for(ll i=0;i<str2.length();i++)
   {
       stk2.push((ll)(str2[i]-'0'));
   }
   stack<ll> stk3;
   ll carry=0;
   while(!stk1.empty() && !stk2.empty())
   {
         ll a=stk1.top();
         ll b=stk2.top();
         cout<<a<<" "<<b<<endl;
         stk1.pop();
         stk2.pop();
         ll s=a+b+carry;
         if((s)>9)
         {
             ll z=s%10;
             stk3.push(z);
             carry=s/10;
         }
         else
         {
             stk3.push(s);
         }
   }
   while(!stk1.empty())
   {
      ll a=stk1.top();
      stk1.pop();
      ll s=a+carry;
      if((s)>9)
         {
             ll z=s%10;
             stk3.push(z);
             carry=s/10;
         }
         else
         {
             stk3.push(s);
         }
   }
   while(!stk2.empty())
   {
      ll a=stk2.top();
      stk2.pop();
      ll s=a+carry;
      if((s)>9)
         {
             ll z=s%10;
             stk3.push(z);
             carry=s/10;
         }
         else
         {
             stk3.push(s);
         }
   }
   while(!stk3.empty())
   {
       cout<<stk3.top();
       stk3.pop();
   }
   return 0;
}
