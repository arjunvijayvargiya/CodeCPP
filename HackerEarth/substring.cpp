#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isunique(string str)
{
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(ll i=0;i<str.length();i++)
        arr[str[i]-'a']++;
    for(ll i=0;i<26;i++)
    {
           if(arr[i]>1)
               return false;
    }
    return true;
}
int main()
{
    string str;
    ll n;
    cin>>n;
    cin>>str;
    string ans="";
    for(ll i=0;i<=str.length()-1;i++)
        for(ll j=1;j<=str.length()-i;j++)
        {
            string temp=str.substr(i,j);
            if(isunique(temp) && temp>ans)
                ans=temp;
        }
    cout<<ans;
    return 0;
}
