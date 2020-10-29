#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n,x;
	cin>>n>>x;
	string s;
	int node,max=0;
	while(n--)
	{
		cin>>s;cin>>node;
		if(2*s.length()>mx)
		mx=2*s.length();
	}
	cout<<mx;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

