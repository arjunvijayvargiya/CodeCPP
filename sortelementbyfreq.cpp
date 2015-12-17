#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
bool funct(int a,int b)
{
    if(mp[a]<mp[b])
        return false;
    else if(mp[a]>mp[b])
        return true;
    else
        return (a<b);
}
int main()
{
    int arr[] = {2, 5, 2, 8, 5, 6, 8, 8};
    int sizes=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+sizes);
    for(int i=0;i<v.size();i++)
      mp[v[i]]++;
    sort(v.begin(),v.end(),funct);
    for(int i=0;i<v.size();i++)
      cout<<v[i]<<",";
    return 0;
}
