#include<iostream>
using namespace std;
#define max 5
int stack[max],top=-1;
void push(int x)
{
    stack[++top]=x;
}
void pop()
{
    top--;
}
void display()
{   if(top==-1)
    cout<<"EMPTY";
    else
    for(int i=0;i<=top;i++)
        cout<<stack[i]<<" ";
    cout<<endl;
}
int main()
{
    while(1)
    {   cout<<"Enter your choice 1 for push 2 for pop 3 for display -1 for exit : ";
        int ch;cin>>ch;
        switch(ch)
        {
        case 1:
            int val;cin>>val;
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case -1:
            exit(1);
        }
    }
}

