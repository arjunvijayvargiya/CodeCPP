#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="my name      is    khan";
    int stkptr=-1;
    int i=0;
    while(i<str.length())
    {
           if(str[i]==' ')
           {
                stkptr++;
                str[stkptr]=str[i];
                i++;
                while(str[i]==' ')
                    i++;
           }
           else
           {
               stkptr++;
               str[stkptr]=str[i];
               i++;
           }
    }
    str[++stkptr]='\0';
    cout<<str;
    return 0;
}
