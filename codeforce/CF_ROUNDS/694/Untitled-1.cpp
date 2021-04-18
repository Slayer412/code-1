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
void solve()
{
	int n;cin>>n;
	vi a(n);
	vi l(n);
	f(i,0,n-1)cin>>a[i];
	f(i,0,n-1)cin>>l[i];
	map<int,int> ind,len;
	vi dup=a;
	sort(all(dup));
	int i=1;
	f(j,0,n-1){
		ind[a[j]]=j;
		len[a[j]]=l[j];
	}
	int ans=0;
	f(j,1,n-1){
		if(ind[dup[j]]>ind[dup[j-1]])continue;
		// cout<<dup[j]<<" ";
		int target=ind[dup[j-1]]+1;
		// cout<<target<<" "<<len[dup[j]]<<' ';
		int x=ceil((double)(target-ind[dup[j]])/len[dup[j]]);
		ans+=x;
		ind[dup[j]]+=x*len[dup[j]];
		// cout<<dup[j]<<" "<< ind[dup[j]]<<'\n';
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}