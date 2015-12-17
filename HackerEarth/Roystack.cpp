#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
      ll t;
      cin>>t;
      vector<char> linest;
      vector<char> dayst;
      ll maxline=-1;
      ll maxday=-1;
      for(ll i=0;i<t;i++)
      {  string str;
          cin>>str;
          for(ll j=0;str[j]!='\0';j++)
          {
              if(str[j]!='C')
              {  ll linesize=linest.size();
                  linest.clear();
                  ll daysize=dayst.size();
                  dayst.clear();
                  if(linesize>maxline)
                      maxline=linesize;
                  if(daysize>maxday)
                      maxday=daysize;
              }
              else
              {
                  linest.push_back('c');
                  dayst.push_back('c');
              }
          }
          linest.clear();
      }
      cout<<maxline<<" "<<maxday;
    return 0;
}
