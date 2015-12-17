#include<iostream>
using namespace std;
struct node{
  int data;s
  node *next;
};
struct ss{
node d;
node *xx;
};
int main(int argc,char **argv)
{  int a=10;
    int *ptr=&a;
    cout<<*ptr;
    node *p=new node;
    p->data=10;
    p->next=new node;
    cout<<p->data;
    char *ch="string";
    cout<<*(ch+2);
    return 0;
}
