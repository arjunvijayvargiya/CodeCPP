#include<iostream>
#include<list>
using namespace std;
int main(int  argc,char **argv)
{
    list<int> l;
    int k;
    cin>>k;
    int i=0;
    while(i<k)
    {
        int n;
        cin>>n;
        l.insert(l.end(),n);
        i++;
    }
    l.sort();
    for( int &v:l)
        cout<<v<<"\n";
    return 0;
}
