#include<iostream>
using namespace std;
typedef struct node
{
    int val;
    struct node *next;
}node;
node *start;
node* newnode()
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->next=NULL;
    return ptr;
}
void push(int x)
{
    node *ptr,*t=NULL;
    ptr=newnode();
    ptr->val=x;
    if(start==NULL)
        start=ptr;
    else
    {
           t=start;
           while(t->next!=NULL)
                t=t->next;
           t->next=ptr;
    }
}
void pop()
{
    node *t,*temp;
    if(start==NULL)
        cout<<"LIST IS EMPTY "<<endl;
    else
    {
        t=start;
        while(t->next!=NULL)
            {   temp=t;
                t=t->next;
            }
            temp->next=NULL;
    }
}
void display()
{
    node *t;
    if(start==NULL)
        cout<<"EMPTY"<<endl;
    else
    {
        t=start;
        while(t!=NULL)
        {
            cout<<t->val<<" ";
            t=t->next;
        }
    }
}
int main()
{
    push(12);
    push(1);
    push(23);
   pop();
    display();
}
