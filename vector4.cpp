#include<iostream>
#include<vector>
using namespace std;
int main(int argc,char **argv)
{
  vector<int> v;
  int k;
  cout<<"enter k";
  cin>>k;
  for(int i=0;i<k;i++)
  {
     int n;
     cin>>n;
     v.push_back(n);
  }
  for(int i=0;i<k;i++)
     cout<<v[i]<<"\t";
  return 0;
}
