#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    list<ll> l,l2;
    l.push_back(2);
    l.push_back(3);
    l.push_back(5);
    l2.push_back(8);
    l2.push_back(4);
    l2.push_back(1);
    l.reverse();
    l.sort();
    l.merge(l2);
    auto it=l.begin();
    while(it!=l.end())
    {
        cout<<*it<<" ";
        it++;
    }
    return 0;
}
