#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	int minind=n+1,maxind=0;
	int mn=101,mx=0;
	for(int i=1;i<=n;++i){
		int x;cin>>x;
		if(x<=mn){
			mn=x;
			minind=i;
		}
		if(x>mx){
			mx=x;
			maxind=i;
		}
	}
	if(minind==n && maxind==1){
		cout<<0;
		return;
	}
	if(minind< maxind){
		int ans=maxind-1+n-minind-1;
		cout<<ans<<'\n';
	}
	else{
		int ans=maxind-1+n-minind;
		cout<<ans<<'\n';
	}
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}