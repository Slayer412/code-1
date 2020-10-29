#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n,sum;cin>>n>>sum;
	vll a(n);
	for(ll &x:a)cin>>x;
	map< ll,int > cnt;
	for(int i=0;i<n;i++){
		cnt[a[i]]=i+1;
	}
	for(int i=0;i<n;i++){
		if(cnt[sum-a[i]] && cnt[sum-a[i]]!=i+1){
			cout<<i+1<<" "<<cnt[sum-a[i]]<<'\n';
			return;
		}
	}
	cout<<"IMPOSSIBLE\n";
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}