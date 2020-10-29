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
	int n;cin>>n;
	string s;cin>>s;
	int r=count(s.begin(),s.end(),'R');
	int l=count(s.begin(),s.end(),'L');
	int u=count(s.begin(),s.end(),'U');
	int d=count(s.begin(),s.end(),'D');
	int ans=0;
	if(r && l){
		ans+=2*min(r,l);
	}
	if(u && d){
		ans+=2*min(u,d);
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}