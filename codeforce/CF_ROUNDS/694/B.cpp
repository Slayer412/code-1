// Problem: B. Strange List
// Contest: Codeforces - Codeforces Round #694 (Div. 2)
// URL: https://codeforces.com/contest/1471/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

//code by: Ravi Khatri @Ravi_Orz
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
#define mod 1000000007
ll n,m,l,r,x;
ll a[1000006];
ll b[1000006];
vi g[1000006];

void solve()
{	ll sum=0;
	cin>>n>>x;
	queue< pair<ll,ll> > q;
	f(i,0,n-1){
		cin>>a[i];
		q.push({a[i],1});
		
	}
	
	while(!q.empty()){
		auto it=q.front();
		q.pop();
	//	cout<<it.F<<" "<<it.S<<'\n';
		if(it.F%x==0){
			sum+=(it.F)*it.S;
			q.push({it.F/x,it.S*x});
		}
		else{
			sum+=(it.F)*it.S;
			break;
		}
	}
//	cout<<sum<<'\n';
	while(!q.empty()){
		auto it=q.front();
	//	cout<<it.F<<" "<<it.S<<'\n';
		sum+=(it.F)*it.S;
		q.pop();
	}
	cout<<sum<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}