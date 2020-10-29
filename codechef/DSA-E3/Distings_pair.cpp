#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	int n,m,f=1;
	cin>>n>>m;
	vector<ll> a(n),b(m);
	map < ll,int > mp;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{	ll x=a[i]+b[j];
			if(mp[x]==0)
			{	cnt++;
				cout<<a[i]<<" "<<b[j]<<'\n';
				++mp[x];
			}
			if(cnt==(n+m-1))
			{
				f=0;break;
			}
		}
		if(!f)
			break;
	}
	return 0;
}