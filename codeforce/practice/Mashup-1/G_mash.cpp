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
	int n;cin>>n;
	vll a(n);

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	multiset<ll> s;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		s.insert(x);
	}
	for(int i=0;i<n;i++){
		ll t=n-a[i];
		auto it=s.lower_bound(t);
		if(it==s.end())
		it=s.begin();
		cout<<(a[i]+*it)%n<<" ";
		s.erase(it);
	}
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}