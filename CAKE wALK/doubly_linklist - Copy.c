#include<stdio.h>
#include<stdlib.h>
struct node
{   int data;
    struct node *prev,*next;
};
struct node *start=NULL;
struct node* getnode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return n;
}
void f_insert()
{
    struct node *ptr;
    int x;
    printf("Enter your value");
    scanf("%d",&x);
    ptr=getnode();
    ptr->data=x;
    if(start==NULL)
    {
        start=ptr;
        ptr->next=NULL;
        ptr->prev=NULL;
    }
    else
    {
        ptr->next=start;
        //start->next->prev=ptr;
        start=ptr;
    }
}
void e_insert()
{
    struct node *ptr,*t;
    int x;
    printf("Enter your value");
    scanf("%d",&x);
    ptr=getnode();
    ptr->data=x;
    ptr->next=NULL;
    if(start==NULL)
       start=ptr;
    else{
        t=start;
        while(t->next!=NULL)
        t=t->next;
        t->next=ptr;
        ptr->prev=t;
        ptr->next=NULL;
        }
}
void display()
{
    struct node *t;
    if(start==NULL)
    printf("list is Empty");
    else
    {   t=start;
        while(t!=NULL)
        {
            printf("%d ",t->data);
            t=t->next;
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    while(1){
    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        f_insert();
        break;
        case 2:
        e_insert();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(0);
    }
    }

}
