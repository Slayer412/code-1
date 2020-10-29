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
	ll min=1;
	int team=0;
	for(int i=n;i>=1;){
		min=a[i];
		int j=i;
		int len=1;
		while(min*len<x && j>=1){
			--j;
			min=a[j];
			++len;
		}
	//	cout<<len<<" "<<i<<" "<<j<<'\n';
	//	cout<<min*j<<'\n';
		if((ll)min*((ll)len)>=x)
		team++;
		i=j-1;
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
