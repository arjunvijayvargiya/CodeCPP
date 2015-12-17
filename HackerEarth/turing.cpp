#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll n,m;
   cin>>n>>m;
   char state[n+1];
   memset(state,'e',sizeof(state));
    for(ll i=0;i<m;i++)
    {
        ll l,r,k;
        char ch;
        cin>>ch;
        vector<char> clock;
        vector<char> anticlock;
        clock.push_back('n');
        clock.push_back('e');
        clock.push_back('s');
        clock.push_back('w');
        anticlock.push_back('n');
        anticlock.push_back('w');
        anticlock.push_back('s');
        anticlock.push_back('e');
        if(ch=='C')
        {cin>>l>>r>>k;
            for(ll j=l;j<=r;j++)
            {ll w;
                  for(w=0;w<4;w++)
                      if(state[j]==clock[w])
                          break;
                  state[j]=clock[(k+w)%4];
            }
        }
        if(ch=='A')
        {cin>>l>>r>>k;
                for(ll j=l;j<=r;j++)
            {ll w;
                  for(w=0;w<4;w++)
                      if(state[j]==anticlock[w])
                          break;
                  state[j]=anticlock[(k+w)%4];
            }
        }
        if(ch=='Q')
        {cin>>l>>r;
            map<char,ll> mp;
            mp['n']=0;
            mp['s']=0;
            mp['e']=0;
            mp['w']=0;
            for(ll j=l;j<=r;j++)
                mp[state[j]]++;
             cout<<max(max(mp['n'],mp['s']),max(mp['e'],mp['w']))<<endl;
        }
    }
  return 0;
}
