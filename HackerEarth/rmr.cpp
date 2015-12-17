#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.insert(v.begin(),4);
    cout<<v[0];
    return 0;
}
