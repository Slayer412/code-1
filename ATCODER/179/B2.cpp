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
		int cnt=0,f=0;
		f(i,0,n-1){
			int u,v;cin>>u>>v;
			if(u==v){
				++cnt;
			}
			else{
				if(cnt>=3)f=1;
				cnt=0;
			}
		}
		if(cnt>=3)f=1;
		if(f)cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	int main()
	{	Fast;
	//	int t;cin>>t;
	//	while(t--)
		solve();
	}