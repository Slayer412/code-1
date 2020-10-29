#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	string s;cin>>s;
	int n=s.size();
	int cnt=0;
	int mn=0;
	ll ans=n;
	for(int i=0;i<n;i++){
		if(s[i]=='-')--cnt;
		else
		++cnt;
		if(cnt<mn){
			ans+=(ll)(i+1);
			mn=cnt;
		}
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}