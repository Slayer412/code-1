#include <stdio.h>
int main() {
        int t;
        int x,y;
        long int n,m,q,count;
        int i,j;
        scanf("%d",&t);
        while(t--)
        {   count=0;
            scanf("%ld%ld%ld",&n,&m,&q);
            long int a[n][m];
            memset(a, 0, sizeof(a));
                while(q--){
                scanf("%d%d",&x,&y);
                for(i=0,j=0;i<n,j<m;i++,j++)
                {   if(x-1==i && y-1==j)
                     a[i][j]+=2;
                    else{
                    a[x-1][j]+=1;
                    a[i][y-1]+=1;
                    }
                }
            }
            for(i=0;i<n;i++)
                for(j=0;j<m;j++)if((a[i][j])%2)count++;
            printf("%d\n",count);
        }
	return 0;
}
