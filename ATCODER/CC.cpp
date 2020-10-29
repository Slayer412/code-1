#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	int rest=0,sport=0,write=0;
	int x;
	for(int i=0;i<n;i++)
	{	cin>>x;
		if(x==0)
		++rest,sport=0,write=0;
		else if(x==1 && !write)
		write=1,sport=0;
		else if(x==1 && write)
		++rest,write=0,sport=0;
		else if(x==2 && !sport)
		{
			sport=1,write=0;	
		}
		else if(x==2 && sport)
		{
			++rest,sport=0,write=0;
		}
		else if(x==3 && !write)
		write=1,sport=0;
		else if(x==3 && !sport)
		sport=1,write=0;
		else if(x==3 && write && sport)
		++rest,write=0,sport=0;
	}
	cout<<rest;
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

