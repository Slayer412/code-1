#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	
	ll a,b;cin>>a>>b;
	if(a<b)
	swap(a,b);
	//cout<<ans1<<'\n';
	if(a==0 || b==0){
	cout<<0<<'\n';
	return;
	}
	else{
		ll ans=min(a,b);
		cout<<min(ans,(a+b)/3)<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}