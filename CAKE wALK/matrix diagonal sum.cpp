#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
int main()
{
	int n;cin>>n;
	int mat[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin>>mat[i][j];
	int sum1=0,sum2=0;
	for(int i=0,int j=0;;i<n,j<n;++j,++i)
	sum1+=mat[i][j];
	for(int i=0,j=n-1;i<n,j>=0;++i,--j)
	sum2+=mat[i][j];
	cout<<abs(sum1-sum2);
}

