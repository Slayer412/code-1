#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 10001
vector < int > v[max];
void solve()
{
	
}
int main()
{
	int n,m;cin>>n>>m;
	map < pair< int  , int >,int >mp;
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
		mp[{a,b}]=1;
	}
	int q;cin>>q;
	while(q--)
	{	int a,b;
		cin>>a>>b;
		if(mp[{a,b}]==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
	}
}

