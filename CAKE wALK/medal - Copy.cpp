#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stk[120];
int top=-1;
void push(int n)
{
    stk[++top]=n;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n]={0};
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;)
        {
            if(a[i]>a[i+1] || a[i]>a[i+2] && a[i]<a[i+1] || a[i]<a[i+2])
                b[i]++;
        }
        for(int i=0;i<n;i++)
           {    if(b[i]==0)
            cout<<a[i]<<" ";
           }
        cout<<endl;
    }
}
