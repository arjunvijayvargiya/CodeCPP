#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{  ll n;
    cin>>n;
    vector<pair<char,char>> p;
    for(ll i=0;i<n;i++)
    {
        char c1,c2;
        cin>>c1>>c2;
        p.push_back(make_pair(tolower(c1),tolower(c2)));
    }
    map<char,char> mp;
    for(ll i=0;i<26;i++)
        mp['a'+i]='a'+i;
    /*for(ll i=0;i<26;i++)
        cout<<mp['a'+i]<<" ";
    cout<<endl;
    for(ll i=0;i<26;i++)
        cout<<mp['A'+i]<<" ";
    cout<<endl;*/
    for(ll i=0;i<n;i++)
    {
        mp[p[i].first]=p[i].second;
        mp[p[i].second]=p[i].first;
    }
     for(ll i=0;i<26;i++)
        cout<<mp['a'+i]<<" ";
    cout<<endl;
    /*for(ll i=0;i<26;i++)
        cout<<mp['A'+i]<<" ";
    cout<<endl;
    */
    string str;
    cin>>str;
    for(ll i=0;i<str.length();i++)
     {
         if(isupper(str[i]))
           {
               char ch=tolower(str[i]);
               char o=mp[ch];
               //cout<<"o="<<o<<endl;
               char t=toupper(o);
               cout<<t;
           }
         else
            cout<<mp[str[i]];
     }
    return 0;
}
