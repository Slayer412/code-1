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
	int n,x;cin>>n>>x;
	vi a(n);
	f(i,0,n-1)
	cin>>a[i];
	map<ll,int> mp;
	mp[0]++;
	ll sum=0;
	int ans=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		ans+=mp[x-sum];
		mp[sum]++;
	}
	cout<<ans;
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}