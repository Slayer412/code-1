#include<iostream>
#include<stdlib.h>
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
void push_back(int x)
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
void push_front(int x)
{
    node *ptr,*t;
    ptr=newnode();
    ptr->val=x;
    if(start==NULL)
        start=ptr;
    else
    {
        t=start;
        start=ptr;
        ptr->next=t;

    }
}
void pop_front()
{   node *t;
    if(start==NULL)
        cout<<"list is empty"<<endl;
    else
    {
        t=start;
        start=start->next;
        free(t);
    }
}
void pop_back()
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
    push_front(10);
    push_back(11);
    push_front(12);
    push_front(13);
    push_front(14);
    push_front(15);
    push_front(16);
    push_back(1);
    push_back(2);
    push_back(3);
    push_back(4);
    push_back(5);
    push_back(6);
    push_back(7);
    pop_front();
    pop_back();
    display();
}
