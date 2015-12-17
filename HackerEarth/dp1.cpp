#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc,char **argv)
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n,m;
        cin>>n>>m;
        ll arr[n][m];
        for(ll j=0;j<n;j++)
            for(ll k=0;k<m;k++)
               cin>>arr[j][k];
         ll dp[n][m];
         memset(dp,-1,sizeof(dp));
         dp[0][0]=1;
         for(j=1; j<n; j++)
	{
	    if(dp[i-1][0]!=-1)
	    {
		if(arr[i][0]>arr[i-1][0])dp[i][0]=dp[i-1][0]+1;
		else dp[i][0]=-1;
	    }
	}
	for(i=1; i<m; i++)
	{
	    if(dp[0][i-1]!=-1)
	    {
		if(arr[0][i]>arr[0][i-1])dp[0][i]=dp[0][i-1]+1;
		else dp[0][i]=-1;
	    }
	}
	for(ll j)

    }
     return 0;
}
