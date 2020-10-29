#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	char b='B',w='W';
	int f=1,cnt=0,blk=0,whit=0;
	for(int i=0;i<n;i++)
	{	 
		for(int j=0;j<m;j++)
		{
			if(m*n%2==0)
			{
				if((i==n-1 && (j==0 || j==1)) || f)
				cout<<b,f=0;
				else
				cout<<w,f=1;
			}
			else
			{
				if((i==n-1 && j==m-1) || f)
				cout<<b,f=0;
				else
				cout<<w,f=1;
			}
		}
		
		cout<<'\n';
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

