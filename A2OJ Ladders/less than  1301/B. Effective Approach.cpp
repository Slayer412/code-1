#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	map<int,int> mp;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		mp[x]=i;
	}
	int m;cin>>m;
	ll p=0,v=0;
	int ele;
	for(int i=0;i<m;i++){
		cin>>ele;
		p+=mp[ele];
		v+=n-mp[ele]+1;
	}
	cout<<p<<" "<<v<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}