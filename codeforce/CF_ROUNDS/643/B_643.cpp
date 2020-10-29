	#include<bits/stdc++.h>
	#define ll long long
	#define vi vector<int>
	#define vll vector<ll>
	using namespace std;
	void solve()
	{
		int n;cin>>n;
		vll a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=0;
		sort(a.begin(),a.end());
		int cnt=0;
		for(int i=0;i<n;i++){
		if(++cnt==a[i])
			++ans,cnt=0;	
		}
		cout<<ans<<'\n';
	}
	int main()
	{
		int t;cin>>t;
		while(t--)
		solve();
	}

