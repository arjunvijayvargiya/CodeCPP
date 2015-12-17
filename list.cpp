#include<iostream>
#include<list>
using namespace std;
int main(int argc,char **argv)
{
  list<int> l;
  int n;
  cin>>n;
  while(n!=-1)
  {
      l.push_back(n);
      cin>>n;
  }
 for(int &v:l)
 {
       cout<<v;
 }
 cout<<"\n";
 l.insert(l.begin(),67);
 l.insert(l.end(),89);
 l.sort();
 l.
list<int>::iterator li;
for(li=l.begin();li!=l.end();li++)
    cout<<*li;
for(auto v:l)
   cout<<v;
  return 0;
}
