#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int a,b,n,s;
	cin>>a>>b>>n>>s;
	if(a>=(s/n)){
		a=s/n;
		if(a*n+b>=s)
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
	else if(a*n + b>=s)
	cout<<"Yes\n";
	else
	cout<<"No\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}