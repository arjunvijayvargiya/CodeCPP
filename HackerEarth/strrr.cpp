#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll k=0;k<t;k++)
    {
        string str;
        cin>>str;
        char out[30];
        ll j=0;
        ll i=0;
        while(i<str.length())
        {
            while(j!=0 && str[i]==out[j-1] )
                i++;
            out[j++]=str[i++];
        }
        out[j]='\0';
        cout<<out<<endl;
    }
    return 0;
}
