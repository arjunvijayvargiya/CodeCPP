#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll h[1005];
int main()
{

    //freopen("i.txt","r",stdin);
    ll t;
    for(scanf("%lld",&t);t;--t)
    {
        ll n,q;
        scanf("%lld%lld",&n,&q);
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&h[i]);
        }
        sort(h,h+n);
        ll sum=0;
        for(int i=1;i<n;i++)
        {
            sum+=q*(h[i]-h[i-1]);
        }
        printf("%lld\n",sum);
    }
       return 0;
}
