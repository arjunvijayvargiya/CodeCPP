#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> li;
    li.push_back(1);
    li.push_back(2);
    auto it=find(li.begin(),li.end(),2);
    cout<<*it;
    return 0;
}
