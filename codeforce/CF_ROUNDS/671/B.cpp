#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,x;cin>>n>>x;
	vi a(n);
	ll sum=0;
	int cnt=0;
	ll sum2=0;
	f(i,0,n-1){
		cin>>a[i];
		sum+=a[i];
		sum2+=a[i]-x;
		if(a[i]==x)++cnt;
	}
	if(cnt==n ){
		cout<<0<<"\n";
		return ;
	}
	int ans=0;
	if(cnt>=1 || sum2==0)ans=1;
	else ans=2;
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}