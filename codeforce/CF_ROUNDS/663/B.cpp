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
	int n,m;cin>>n>>m;
	char s[n][m];
	for(int i=0;i<n;i++){
		f(j,0,m-1)
		cin>>s[i][j];
	}
	if(n==1 && m==1){
		cout<<0<<'\n';
		return;
	}
	int changes=0;
	f(i,0,m-1){
		if(s[n-1][i]=='D')++changes;
	}
	f(i,0,n-1)
	if(s[i][m-1]=='R')++changes;
	
	cout<<changes<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}