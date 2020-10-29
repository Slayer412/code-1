#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<ll> a(n),b(m);
	map<int,int> m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(m[a[i]+b[j]]==0)
			{	cnt++;
				cout<<a[i]<<" "<<b[i]<<'\n';
				m[a[i]+b[j]]++;
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