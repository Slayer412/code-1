#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,k;cin>>n>>k;
	vi v(n+2),pref(n+2);
	for(int i=1;i<=n;i++)
	cin>>v[i];
	for(int i=2;i<n;i++)
	{
		if(v[i-1]<v[i] && v[i]>v[i+1])
		{
			pref[i]=1;
		}
	}
	for(int i=1;i<=n-1;i++)
	{
		pref[i]+=pref[i-1];
	}
	//for(int i=0;i<n;i++)
	//cout<<pref[i]<<" ";
	//cout<<'\n';
	int ans=0,l=1,mx=0;
	for(int i=1;i<=n-k+1;i++)
	{	
		if(pref[i+k-2]-pref[i]>mx)
			{	//cout<<"I "<<i+k-1<<" "<<i<<'\n';
				mx=pref[i+k-2]-pref[i];
				l=i;
			}
	}
	cout<<mx+1<<" "<<l<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}