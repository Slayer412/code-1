#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

void solve()
{	
	int n,m;
	cin>>n>>m;
	int type[n],price[n];
	int ans[m]={0},vis[m];
	for(int i=0;i<n;i++)
	cin>>type[i],vis[type[i]-1]=1;
	for(int i=0;i<n;i++)
	cin>>price[i];
	for(int i=0;i<n;i++)
	{
		ans[type[i]-1]+=price[i];
	}
	sort(ans,ans+m);
	
	//for(int i=0;i<m;i++)
	cout<<ans[0]<<endl;
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

