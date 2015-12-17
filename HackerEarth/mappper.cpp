#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    map<char,ll> mp;
    string str="jfhdsjfhsdkfjhsdf";
    for(ll i=0;i<str.length();i++)
        mp[str[i]]=1;
    cout<<mp['a'];
    return 0;
}
