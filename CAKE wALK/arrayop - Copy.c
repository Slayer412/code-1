#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	long int a[10000];
	long int x,n,k;
	int i;
	scanf("%d",&t);
	while(t--)
	{   scanf("%ld%ld",&n,&k);
	    for(i=0;i<n;i++)
	    scanf("%ld",&a[i]);
	        for(i=0;i<k;i++)
	         {  // if(i<k)
	             a[i%n]=a[i%n]^a[n-(i%n)-1];
	           /*if(k<n)
	             { if(i<n)
	               printf("%ld ",a[i%n]);
	             }
	             else if(i>=2*n)*/
	             printf("%ld ",a[i%n]);
	         }
	    /*else
	    {


	    }*/
	   printf("\n");
	   for(i=0;i<n;i++)
	    printf("%ld ",a[i%n]);

	  }
	return 0;
}


