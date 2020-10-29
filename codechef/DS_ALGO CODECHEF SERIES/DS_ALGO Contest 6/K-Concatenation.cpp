#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,k;cin>>n>>k;
	vi a(n);
	ll sum=0;
	for(int &i:a)cin>>i,sum+=i;
	ll mxsum=0,currsum=0;
	for(int i=0;i<n*2;i++)
	{
		currsum+=a[i%n];
		mxsum=max(mxsum,currsum);
		if(currsum<0)
		currsum=0;
	}
	ll ans=mxsum+max(0,(k-2)*sum);
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

