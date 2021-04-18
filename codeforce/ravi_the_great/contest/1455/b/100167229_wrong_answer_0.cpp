#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;


void solve()
{
	double s;cin>>s;
	
	ll n=ceil(ceil((sqrt(double(1+8*s))-1))/2);
	
	if(s==2){
		cout<<3<<endl;
		return;
	}
	ll sum=(n*(n+1))/2;
	int ans=n+sum-s;
	int i=1;
	int t=10;
	while(--t){
		int j=i+1;
		int minus=(j*(j+1))/2-1;
		ll x=sum;
		x-=minus;
		int res=n+abs(res-s);
		if(ans<res)break;
		ans=min(res,ans);
		++i;
	}
	cout<<ans<<endl;
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}