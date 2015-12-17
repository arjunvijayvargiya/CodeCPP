#include<bits/stdc++.h>
using namespace std;
queue<int> q1,q2;
void pushstack(int key)
{
    while(!q1.empty())
    {
        int temp=q1.front();
        q1.pop();
        q2.push(temp);
    }
    q1.push(key);
    while(!q2.empty())
    {
        int temp=q2.front();
        q2.pop();
        q1.push(temp);
    }
}
int popstack()
{
    int temp=q1.front();
    q1.pop();
    return temp;
}
int main()
{
    // implementing stacks using two queues
    pushstack(1);
    pushstack(2);
    pushstack(3);
    pushstack(4);
    pushstack(5);
    cout<<popstack()<<endl;
    cout<<popstack()<<endl;
    cout<<popstack()<<endl;
    cout<<popstack()<<endl;
    cout<<popstack()<<endl;
    return 0;
}
