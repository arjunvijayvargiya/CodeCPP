#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc,char **argv)
{
    ll t;
    cin>>t;
    ll k=0;
    double ans[t];
    while(t--)
    {
       double a,b,c,x,y,z;
       cin>>x>>y>>z;
        a=(x-y+z)/2;
        b=(x+y-z)/2;
        c=(z-x+y)/2;
        ll peri;
        peri=2*(a*b+b*c+c*a);
        ans[k++]=peri;
    }
    for(ll i=0;i<k;i++)
    {
        std::cout << std::fixed << std::setprecision(2) << ans[i] << std::endl;
    }
    return 0;
}
