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
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	sort(a.begin(),a.end());
	int i=0,j=n-1;
	int cnt=0;
	vi ans;
	while(i<j){
		ans.pb(a[j]);
		ans.pb(a[i]);
		--j,++i;
	}
	if(n%2)
		ans.pb(a[n/2]);
	cout<<cnt<<"\n";
	for(int i:ans)cout<<i<<" ";
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}