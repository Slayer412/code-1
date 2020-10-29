#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll n,q;
	cin>>n>>q;
	vector<pair<int,int> >v(q);
	ll sum=0;
	for(int i=0;i<q;i++)
	{
		cin>>v[i].first>>v[i].second;
		if(i==0)
		sum+=(v[i].second);
		else
		{
			sum+=abs(v[i-1].second-v[i].first)+abs(v[i].second-v[i].first);
		}
	}
	cout<<sum<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

