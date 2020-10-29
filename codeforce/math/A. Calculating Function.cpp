#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n;cin>>n;
	ll odd,evn;
	if(n%2)odd=(n+1)/2LL,evn=n/2LL;
	else
	odd=evn=n/2LL;
	ll ans=(evn*(evn+1)) - (1LL*odd*odd);
	cout<<ans<<'\n';
	
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}