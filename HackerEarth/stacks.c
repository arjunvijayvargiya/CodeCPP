#include<iostream>
#define ll long long
using namespace std;
int main()
{
    stack<ll> stk;
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        ll w;
        cin>>w;
        if(w==1)
        {
            if(stk.empty())
                cout<<"No food\n";
            else
            {
                cout<<stk.top();
                stk.pop();
            }
        }
        else
        {
              ll p;
              cin>>p;
              stk.push(p);
        }
    }
    return 0;
}
