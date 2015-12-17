#include<bits/stdc++.h>
#define long long ll
using namespace std;
ll editDistDP(string str1, string str2, ll m, ll n)
{
    // Create a table to store results of subproblems
    ll dp[m+1][n+1];

    // Fill d[][] in bottom up manner
    for (ll i=0; i<=m; i++)
    {
        for (ll j=0; j<=n; j++)
        {
            // If first string is empty, only option is to
            // isnert all characters of second string
            if (i==0)
                dp[i][j] = 0;  // Min. operations = j


            // If last characters are same, ignore last char
            // and recur for remaining string
            else if (str1[i-1] == str2[j-1])
                dp[i][j] = dp[i-1][j-1];

            // If last character are different, consider all
            // possibilities and find minimum
            else
                return  min ( editDist(str1,  str2, m, n-1),    // Insert
                     editDist(str1,  str2, m-1, n),   // Remove
                     1+editDist(str1,  str2, m-1, n-1) // Replace
                   );
        }
    }

    return dp[m][n];
}
int main()
{
   ll t;
   cin>>t;
   for(ll i=0;i<t;i++)
   {
       string str1,str2;
       cin>>str1>>str2;
       cout<<editDistDP(str1,str2,str1.length(),str2.length())<<endl;
   }
  return 0;
}
