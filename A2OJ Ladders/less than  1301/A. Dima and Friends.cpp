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
	ll sum=0;
	int k=n;
	while(k--){
		int x;cin>>x;
		sum+= x%(n+1);
	}
	int ans=0;
	for(int i=1;i<=5;i++)
	if((sum+i)%(n+1)!=1)
	++ans;
	cout<<ans<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}