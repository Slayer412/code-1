#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll n,k;cin>>n>>k;
	ll mx=2*1000000000;
	ll siz=min(mx,(n*(n-1))/2);
	ll l=1;
	ll t=n-1;
	vector < int > b1,b2;
	for(int i=1;i<=siz;)
	{	
		ll temp=l;
		while(temp--)
		b1.push_back(t),++i;
		--t;
		++l;
	
	}
	l=1;
	t=n;
	for(int i=1;i<=siz;)
	{	ll temp=l;
		while(temp--)
		b2.push_back(t--),++i;
		++l;
		t=n;	
	}
	for(int i=0;i<n;i++)
	{
		if(i+1==b1[k-1]|| i+1==b2[k-1])
		cout<<'b';
		else
		cout<<'a';
	}
	cout<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

