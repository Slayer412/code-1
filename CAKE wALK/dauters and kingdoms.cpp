#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n,k,x;cin>>n;
	int arr[n+1]={0},b[n+1]={0};
	int index=0;
	for(int i=1;i<=n;i++)
	{
		cin>>k;
		while(k--)
		{
			cin>>x;
			if(arr[i]==0 && b[x]==0)
			arr[i]=x,b[x]++;
			
		}
		if(arr[i]==0)
		index=i;
	}
	if(index==0)cout<<"OPTIMAL\n";
	else
	{	cout<<"IMPROVE\n";
		cout<<index<<" ";
		for(int i=1;i<=n;i++)
		if(b[i]==0)
		{
		cout<<i<<'\n';
		break;
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

