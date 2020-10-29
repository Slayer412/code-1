#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n,q;cin>>n>>q;
	int arr[n],x;
	int res[n+1]={0};
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)
	{	int cnt=0;
		x=arr[i];
		while(x)
		{	
			if(x%2)++cnt;
			else
			cnt=0;
			x=x>>1;
			if(cnt==2)
			break;	
		}
		if(cnt==2 && i+1==1)
		res[i+1]=1;
		else if(cnt==2)
		res[i+1]=res[i]+1;
		else
		res[i+1]=res[i];
	}
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		if(l==1)
		cout<<res[r]<<'\n';
		else
		cout<<res[r]-res[l-1]<<'\n';
	}
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

