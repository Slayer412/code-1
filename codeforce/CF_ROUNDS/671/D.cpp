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
		std::vector<int> a(n);
		f(i,0,n-1){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		if(n<3){
			cout<<0<<'\n';
			for(int i:a)cout<<i<<" ";
				return ;
		}
		cout<<(n-1)/2<<'\n';
		int i=0,j=n-1;
		while(i<j){
			cout<<a[j]<<" "<<a[i]<<" ";
			++i,--j;

		}
		if(n%2){
			cout<<a[n/2]<<" ";
		}

	}
	int main()
	{	Fast;
	//	int t;cin>>t;
	//	while(t--)
		solve();
	}