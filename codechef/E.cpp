#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	
	vector<int> cnt(n+1);
	for(int &i:a){
		cin>>i;
		++cnt[i];
	}
	ll ans=0;
	for(int l=0;l<n;l++)
	{	int sum=0;
		for(int r=l;r<n;r++)
		{	sum+=a[r];
			if(l==r)
			continue;
			if(sum<=n)
			{
				ans+=cnt[sum];
				cnt[sum]=0;
			}
		}
	}
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

