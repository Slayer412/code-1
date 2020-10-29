#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
vll dp(10002);

void calculate(){
	dp[0]=dp[1]=0;
	f(i,2,10000){
		ll j=i*i;
		ll x=(j*1LL*(j-1))/2ll;
		ll m=(ll)i-2ll;
		x=x-8LL*(m*(m+1))/2ll;
		dp[i]=x;
	}	
}
void solve()
{
	ll n;cin>>n;
	f(i,1,n){
		cout<<dp[i]<<'\n';
	}
}
int main()
{	Fast;
	calculate();
	//int t;cin>>t;
	//while(t--)
	solve();
}