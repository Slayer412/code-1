#include<stdio.h>
void fibb( long int n)
{
    long int a[n],e[n],n1=0,n2=1;
    int i,p=1;
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=n1+n2;
        n1=n2;
        n2=a[i];
    }
    while(n/2!=0)
    {
        for(i=p;i<n;i++)
        {
            e[i]=a[i]%10;
        }
        n/=2;
        p++;
    }
    printf("%ld\n",e[p]);
}
void main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {    long int n;
         scanf("%ld",&n);
         fibb(n);
    }
}