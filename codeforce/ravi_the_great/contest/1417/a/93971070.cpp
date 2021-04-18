#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,k;cin>>n>>k;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	sort(a.begin(),a.end());
	ll sum=0;
	f(i,1,n-1){
		if(k-a[i]>0)
		sum+=(k-a[i])/a[0];
		else
			break;
	}
	cout<<sum<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}