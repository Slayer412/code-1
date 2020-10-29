#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	ll x;cin>>x;
	vll a(n+1);
	f(i,1,n)cin>>a[i];
	sort(a.begin(),a.end());
	int min=1;
	int team=0;
	for(int i=1;i<=n;){
		min=a[i];
		int j=i;
		while(min*j<x && j<=n){
			j++;
		}
		if(min*(j-i+1)>=x)
		team++;
		if(i!=j)
		i=j;
		else
		++i;
		min=a[i];
	}
	cout<<team<<"\n";
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}