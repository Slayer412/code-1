#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	if(n==1)
	cout<<0<<'\n';
	else if(n==2)
	cout<<m<<'\n';
	else
	cout<<2*m<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

