#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}
int main()
{
    ll a,b;
    cin>>a>>b;
    ll z=gcd(a,b);
    cout<<z;
    return 0;
}
