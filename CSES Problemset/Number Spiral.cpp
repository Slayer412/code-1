#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

void solve()
{
	ll x,y;
	cin>>x>>y;
	ll dig=1LL;
	if(x>y){
		if(x%2==0){
			dig=x*x;
			dig-=(y-1);
			cout<<dig<<'\n';
		}
		else{
			ll sq=x-1;
			dig=(sq*sq)+1;
			dig+=(y-1);
			cout<<dig<<'\n';
		}
	}
	else{
		if(y%2==0){
			dig=(y-1)*(y-1)+1;
			dig+=(x-1);
			cout<<dig<<'\n';
		}
		else{
			ll sq=y;
			dig=(sq*sq);
			dig-=(x-1);
			cout<<dig<<'\n';
		}
	}
}
int main()
{	
#ifdef ONLINE_JUDGE
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);
#endif
	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}