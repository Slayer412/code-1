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
	int n,q;cin>>n>>q;
	vi a(n);
	f(i,0,n-1)cin>>a[i];	
	vector< ll > d1(n+1),d2(n+1);
	d1[0]=-1e9;
	d2[0]=0;
	f(i,0,n-1){
		d1[i+1]=max(d1[i],a[i]+d2[i]);
		d2[i+1]=max(d2[i],d1[i]-a[i]);			
	}
	cout<<max(d1.back(),d2.back())<<'\n';

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}