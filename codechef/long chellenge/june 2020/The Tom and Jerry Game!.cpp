#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll Ts;cin>>Ts;
	if(Ts%2){
		ll ans=Ts/(1LL*2);
		cout<<ans<<'\n';
	}
	else{
		while(Ts%2==0)
		Ts/=2;
		if(Ts%2 && Ts!=1)
		{
			cout<<(Ts/(1LL*2))<<'\n';
		}
		else{
			cout<<0<<'\n';
		}
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}