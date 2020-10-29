#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
ll pow(ll n,ll x){
	ll res=1;
	while(x){
		if(x%2)
		res=res*n;
		n*=n;
		x>>=1;
	}
}
ll fn(ll i,ll x,ll n){
	
	if(x>=n){
	cout<< x<<'\n';
	return 0;
	}
	return min(fn(i+1,x,n),(ll)pow(3,i)+(ll)fn(i+1,x+pow(3,i),n));
}
void solve()
{
	int n;cin>>n;
	cout<<fn(0,(ll)0,(ll)n)<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
