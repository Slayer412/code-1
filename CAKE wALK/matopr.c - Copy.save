#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[1000],b[1000];
    while(t--)
    {
        long int n,m,q;
        int x,y,i,j,sum=0;
        scanf("%ld%ld%ld",&n,&m,&q);
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for(j=0;j<q;j++)
        {
            scanf("%d%d",&x,&y);
            if(a[x-1]==m-1)
                a[x-1]=0;
            else
            a[x-1]+=m-1;
            if(b[y-1]==n-1)
                b[y-1]=0;
            else
            b[y-1]+=n-1;
        }
        for(i=0;i<n;i++)
            sum+=a[i];
            //sum/=n;
        for(i=0;i<m;i++)
            sum+=b[i];
        printf("%d\n",sum);
    }
}
