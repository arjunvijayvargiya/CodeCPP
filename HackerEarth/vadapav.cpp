#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    set<string> stt;
    for(ll i=0;i<n;i++)
    {
        string str;
        cin>>str;
        auto it=stt.find(str);
        if(it==stt.end())
            stt.insert(str);
    }
    //sort(stt.begin(),stt.end());
    cout<<stt.size()<<"\n";
   for( set<string>::iterator itt=stt.begin();itt!=stt.end();itt++)
      cout<<*itt<<"\n";
    return 0;
}
