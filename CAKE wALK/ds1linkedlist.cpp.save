#include<iostream>
using namespace std;
typedef struct node
{
    int val;
    struct node *next;
}node;
node *start=NULL;
node* newnode()
{   node *s;
    s=(node*)malloc(sizeof(node));
    s->next=NULL;
    return s;
}
void push(int x)
{
    node *ptr,*temp=NULL;
    ptr=newnode();
    ptr->val=x;
    if(start==NULL)
        start=ptr;
    else
    {   temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=ptr;
        ptr->next==NULL;
        //temp=ptr;
    }
}
void pop()
{   node *temp1,*temp;
    if(start==NULL)
        cout<<"EMPTY"<<endl;
    else
    {   temp1=start;
        while(temp1!=NULL)
            temp1=temp1->next;

            temp=temp1;
            temp1=temp1->next;
            free(temp);
    }
}
void print()
{   node *temp;
    temp=start;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
     }
}
int main()
{
push(10);
push(14);
push(12);
push(1333);
pop();
pop();
print();
}
