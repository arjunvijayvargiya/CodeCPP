#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="           my                                 name      is    khan";
    int stkptr=0;
    int i=0;
    while(str[i]!='\0')
    {
           if(str[i]==' ' && i==0)
           {
                 while(str[i]==' ')
                 {

                     i++;
                 }
           }
           else if(str[i]==' ')
           {
                str[stkptr]=str[i];
                i++;
                stkptr++;
                while(str[i]==' ' && str[i]!='\0')
                     i++;
           }
           else
           {
               str[stkptr]=str[i];
               stkptr++;
               i++;
           }
    }
   for(int i=0;i<stkptr;i++)
     cout<<str[i];
    return 0;
}
