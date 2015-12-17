#include<iostream>
#include<tuple>
using namespace std;
int main(int argv,char **argc)
{
    pair<int,string> p(67,"42");
    cout<<p.first;
    pair<int,string> p[3];
    int n;
    string str;
    for(int i=0;i<3;i++)
    {
        cin>>n;
        cin>>str;
        p[i].first=n;
        p[i].second=str;
    }
    return 0;
}
