#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define mod 1000000007
using namespace std;
void solve()
{
	int n;cin>>n;
	vll a(n);
	f(i,0,n-1)cin>>a[i];
	sort(a.begin(),a.end());
	if(n>33){
		ll cost=0;
		f(i,0,n-1)cost+=a[i]-1;
		
		cout<<cost;
		return;
	}
	ll l=1,r=1;
	f(i,1,1e5){
		if(pow(i,n-1)>=a[n-1]){
			l=r;
			r=i;
			break;
		}
		r=i;
	}
	ll p=1;
	ll cost=0;
	f(i,0,n-1){
		cost+=abs(a[i]-p);
		p*=l;
	}
	ll cost1=0;
	p=1;
	f(i,0,n-1){
		cost1+=abs(a[i]-p);
		p*=r;
	}
	cout<<min(cost,cost1);
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}