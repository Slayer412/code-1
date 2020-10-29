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
	int n,k;cin>>n>>k;
	vi a(n);
	ll sum=0;
	int mx=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum<=k){
		cout<<0<<'\n';
		return;
	}
	sum=0;
	for(int i=0;i<n;i++){
		if(a[i]>a[mx])
		mx=i;
		sum+=a[i];
		if(sum>k)
		break;
	}
	cout<<mx+1<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}