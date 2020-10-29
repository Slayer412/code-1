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
	vll a(n);
	for(ll &x:a)cin>>x;
	ll maxsum=LLONG_MIN,sum=0;
	//maxsum=max(maxsum,sum);	
	for(int i=0;i<n;i++){
		sum+=a[i];
		maxsum=max(sum,maxsum);
		if(sum<0)
		sum=0;
	}
	cout<<maxsum<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}