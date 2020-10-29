#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	string s="";
	if(n==1)
	cout<<"-1\n";
	else
	{
		s=s+"2";
		while(--n)
		s+="3";
	cout<<s<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

