#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n,m,k;
	cin>>n>>m>>k;
	vll a(n);
	map<ll,int> b;
	ll x;
	f(i,0,n-1)cin>>a[i];
	f(i,0,m-1){
		cin>>x;
		b[x]++;
	}
	f(i,0,n-1){
		
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}