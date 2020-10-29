#include<iostream>
#include<set>
using namespace std;
#define ll long long

void solve()
{
	int n,m;cin>>n>>m;
	ll x;
	set < ll >a;
	set <ll >b;
	for(int i=0;i<n;i++)
	{	
		cin>>x;
		a.insert(x);
	}
	for(int i=0;i<m;i++)
	{
		cin>>x;
		if(a.count(x)==1)
		cout<<"YES"<<endl,a.erase(x);
		else
		cout<<"NO"<<endl;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

