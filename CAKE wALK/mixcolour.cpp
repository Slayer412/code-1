	#include<iostream>
	#include<algorithm>
	#include<set>
	#include<math.h>
	using namespace std;
	#define ll long long
	void solve()
	{
			int n;cin>>n;
			ll x;
			set < ll >s;
			for(int i=0;i<n;i++)
			{
				cin>>x;
				s.insert(x);
			}
			int l=s.size();
			cout<<n-l<<endl;
	}
	int main()
	{
		int t;cin>>t;
		while(t--)
		solve();
	}

