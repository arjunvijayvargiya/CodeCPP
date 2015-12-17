#include<bits/stdc++.h>
#define ll long long
using namespace std;
string str;
void swapp()
{
    ll len=str.length()/2;
    //cout<<len<<endl;
    ll point=0;
    stack<char> stk;
    for(ll i=1;i<=len;i++)
    {
        char ch=str[point+1];
        stk.push(ch);
        str.erase(point+1,1);
        point=point+1;
    }
    while(!stk.empty())
     {
         str.push_back(stk.top());
         stk.pop();
     }
     //cout<<"str="<<str<<endl;
}
int main()
{
    ll s;
    cin>>s;
    cin>>str;
    for(ll i=0;i<s;i++)
         swapp();
    cout<<str;
    return 0;
}
