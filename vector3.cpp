#include<vector>
#include<iostream>
using namespace std;
int main(int argv,char **argc)
{
    vector<int> v;
    int n;
    for(int i=0;i<4;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    for(int i=0;i<4;i++)
    {
        cout<<v[i]<<endl<<"whola";
    }

    return 0;
}
