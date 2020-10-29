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
	int a[n][m];
	f(i,0,n-1){
		f(j,0,m-1)
		cin>>a[i][j];
	}
	int ans=0;
	int curmin=INT_MAX;
	f(i,0,n-1){
		curmin=INT_MAX;
		f(j,0,m-1){
			curmin=min(curmin,a[i][j]);
		}
		ans=max(ans,curmin);
		
	}
	cout<<ans;
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}