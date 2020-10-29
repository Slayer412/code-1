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
	ll n,t;cin>>n>>t;
	vll a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll lb=1LL,rb=1e18;
	while(lb<rb){
		ll mid=(lb+rb)/2LL,s=0;
		for(int i=0;i<n;i++){
			s+=min((ll)mid/a[i],(ll)1e9);
		}
		if(s>=t){
			rb=mid;
		}
		else
		lb=mid+1LL;
	}
	cout<<lb<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}