#include<iostream>
using namespace std;
#define size 5
int queue[size],front=-1,rear=-1;
void insert(int x)
{   if(front==0 && rear==size-1 || rear==(front-1)%(size-1))
       cout<<"overflow"<<endl;
    else if(front==-1)
    {
        front=rear=0;
        queue[rear++]=x;
    }
    else if(front!=-0 && rear==size-1)
    {
        rear=0;
        queue[rear]=x;
    }
    else{
        queue[rear++]=x;
    }
}
void display()
{
    if(front==-1)
        cout<<"underflow"<<endl;
    else if(rear<=front)
    {
        for(int i=front;i<size;i++)
            cout<<queue[i]<<" ";
        for(int i=0;i<=rear;i++)
            cout<<queue[i]<<" ";
    }
    else
    {
        for(int i=front;i<=rear;i++)
        cout<<queue[i]<<" ";
    }
}
int main()
{
    insert(8);
    insert(7);
    insert(6);
    display();
}