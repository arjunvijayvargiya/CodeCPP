#include<iostream>
#include<vector>
using namespace std;
int main(int argv,char **argc)
{
    vector<int> v={1,2,3,4,5,6,7};
    cout<< v.front();
    vector<int> v2;
    int n;
    for(int i=0;i<4;i++)
    {
        cin>> n;
        v2.push_back(n);
    }
    return 0;
}
