#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool funct(pair<ll,string> p1,pair<ll,string> p2)
{
    if(p1.first>p2.first)
        return true;
    else if(p1.first==p2.first)
    {
        if(p1.second>p2.second)
            return false;
        else
            return true;
    }
    else
       return false;
}
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,string>> v;
    for(ll i=0;i<n;i++)
    {
        string str;
        ll marks;
        cin>>str>>marks;
        v.push_back(make_pair(marks,str));
        sort(v.begin(),v.end(),funct);
    }
    for(ll i=0;i<n;i++)
        cout<<v[i].second<<" "<<v[i].first<<endl;
    return 0;
}
