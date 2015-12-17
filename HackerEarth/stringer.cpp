#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	cin>>T;
    while(T--)
    {
    	string W,R;
    	cin>>W>>R;
    	long len,lenW=len=W.length(),lenR = R.length(),i=0,j=0;
    	sort(R.begin(),R.end());
    	for(i=0,j=0;i<len;++i)
    	{
    		if(R[j] < W[i] && j<lenR)
    			cout<<R[j++];
    		else
    			cout<<W[i];
    	}
    	cout<<"\n";
    }
    return 0;
}
