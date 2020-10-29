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
	int n,m;cin>>n>>m;
	vi a(n),b(m);
	map<int,int> mpa;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mpa[a[i]]++;
	}
	int ans=-1;
	for(int i=0;i<m;i++){
		cin>>b[i];
		if(mpa[b[i]] && ans==-1){
			ans=b[i];
		}
	}
	if(ans==-1)
	cout<<"NO\n";
	else
	cout<<"YES\n"<<1<<" "<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}