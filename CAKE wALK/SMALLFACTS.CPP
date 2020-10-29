#include<iostream>
using namespace std ;
int main()
{
	int n,i,j,k,temp;
	int f[1000],m;

		cin>>n;
		f[0]=1;
		m=1;
        for(j=1;j<=n;j++)
		{	temp=0;
			for(k=0;k<m;k++)
			{
			temp+=f[k]*j;
			f[k]=temp%10;
			temp=temp/10;
			}
		//	cout<<k<<" ";
			while(temp>0)
			{	
				f[k]=temp%10;
				temp=temp/10;
				k++;m++;
			}		
	    }
	for(j=m-1;j>=0;j--)
	cout<<f[j];
         
return 0;
} 

