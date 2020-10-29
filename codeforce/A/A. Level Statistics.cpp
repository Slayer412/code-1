#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{	int n;cin>>n;
	vector< pair<int,int> >v;
	int x,y;
	int f=1;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	if(n==1)
	{	if(v[0].first>=v[0].second)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	else
	{
	auto j=v.begin();
	++j;
	for(int i=1;i<n;i++)
	{	//cout<<v[i].first<<" "<<v[i-1].first<<'\n';
	 	if( v[i].first-v[i-1].first>=0 && v[i].second-v[i-1].second>=0 && v[i].first-v[i-1].first >= v[i].second-v[i-1].second)
	 	continue;
	 	else{
		f=0;
	 	break;
	 	}
	}
	if(f)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

