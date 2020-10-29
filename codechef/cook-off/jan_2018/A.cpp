#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n,k,s;
	cin>>n>>k>>s;
	if(s<7)
	{
	    if((s*k)-(n*k)<=0)
	    cout<<ceil((double)(s*k)/n)<<'\n';
	    else
	    cout<<"-1\n";
	}
	else if(7*k>n*6)
	cout<<"-1\n";
	else
	{
		int ans=ceil((double)(s*k)/n);
		cout<<ans<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

