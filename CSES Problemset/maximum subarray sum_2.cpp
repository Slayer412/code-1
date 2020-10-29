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
	int n,l,r;
	cin>>n>>l>>r;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	ll max_sum=LLONG_MIN,sum=0;;
	int low=0,hi=0;
	while(hi<n){
		sum+=a[hi];
		if(hi-low+1>=l && hi-low+1<=r)
		max_sum=max(sum,max_sum),cout<<l<<""<<r<<'\n';
		if(hi-low+1==r)
		sum-=a[low++],++hi;
		++hi;
		
	}
	cout<<max_sum<<"\n";
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}