#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;
float st[100];int top=-1;
void push(float x)
{
    st[++top]=x;
}
float pop()
{
    return st[top--];
}
float posteval(char exp[])
{   int i=0;
    float op1,op2,val;
    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
            push(exp[i]);
        else
        {
            op1=pop();
            op2=pop();
            switch(exp[i])
            {
            case '+':
                val=op1+op2;
                break;
            case '-':
                val=op1-op2;
                break;
            case '*':
                val=op1*op2;
                break;
            case '/':
                val=op1/op2;
                break;

            case '^':
                val=pow(op1,op2);
                break;
            }
            push(val);
        }
    }
    return pop();
}
int main()
{
    char s[10];
    gets(s);
    float val=posteval(s);
    printf("%.2f",val);
}
