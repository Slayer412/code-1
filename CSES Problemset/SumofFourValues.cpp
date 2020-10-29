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
	int n,X;cin>>n>>X;
	unordered_map< ll,pair<int,int> > cnt;
	vi a(n);
	cnt.reserve(1<<20);
	ll mini=1e10;
	for(int i=0;i<n;i++)cin>>a[i],mini=min(mini,(ll)a[i]);
	if(X<mini){
		cout<<"IMPOSSIBLE\n";
		return;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			auto it=cnt.find(X-(a[i]+a[j]));
			if(it!=cnt.end()){
				cout<<i+1<<" "<<j+1<<" "<<it->S.F+1<<" "<<it->S.S+1<<'\n';
				return;
			}
		}
		f(j,0,i-1){
			cnt[a[i]+a[j]]={i,j};
		}
	}
	cout<<"IMPOSSIBLE\n";
	
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}