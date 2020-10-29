#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,m,xx;cin>>n>>m>>xx;
	int c,a,price;
	map<int,vector<int> > mp;
	for(int i=0;i<n;i++)
	{	cin>>price;
		for(int j=0;j<m;j++)
		{
			cin>>a;
			mp[price].push_back(a);
		}
	}
	int mat[n+1][m+1];
	int x=0,y=0;
	for(auto i:mp)
	{
		for(auto ii:mp[i.first])
		mat[x][y++]=ii;
		y=0;
		x++;
	}
	int flag=1;
	ll ans=0,res=0,cnt=0;
	for(int  i=0;i<n;i++)
	{	auto itr=mp.begin();
		res=0,ans=0;
		for(int j=0;j<m;j++)
		{
			ans+=mat[j][i];
			res+=itr->first;
			++itr;
			if(ans>=xx){
			cnt++;
			break;
			}
		}
		if(ans<=xx)
		flag=0;
		if(flag==0)
		break;
	}
	if(flag)
	cout<<res<<'\n';
	else
	cout<<-1<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

