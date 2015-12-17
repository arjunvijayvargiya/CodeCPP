#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,char> mp;
    mp['a']='c';
    mp['b']='c';
    mp['c']='f';
    mp['d']='e';
    mp['e']='f';
    mp['f']='f';
    map<string,string> llk;
    if(mp.find('c')!=mp.end())
        cout<<"hurray"<<endl;
    return 0;
}
