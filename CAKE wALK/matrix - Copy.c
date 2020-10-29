#include <stdio.h>
int main() {
        int t;
        scanf("%d",&t);
long long int a[1000][1000]={0};
        while(t--)
        {
            int i,j,n,m,q,count=0;
            scanf("%d%d%d",&n,&m,&q);
            /*for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                    a[i][j]=0;
            }*/
            for(i=0;i<q;i++)
            {
                int x,y;
                scanf("%d%d",&x,&y);
                for(j=0;j<m;j++)
                a[x-1][j]+=1;
                for(j=0;j<n;j++)
                a[j][y-1]+=1;
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if((a[i][j])%2)
                    count++;
                }
            }
            printf("%d\n",count);
        }


	return 0;
}

