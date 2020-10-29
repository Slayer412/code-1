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
	multiset<int> s;
	f(i,0,n-1){
		int x;cin>>x;
		s.insert(x);
	}
	int mx=1e9+5;
	int ans=0;
	while(!s.empty()){
		auto it=s.upper_bound(mx);
		if(it==s.end()){
			mx=*s.begin();
			s.erase(s.begin());
		}
		else{
			++ans;
			mx=*it;
			s.erase(s.find(mx));
		}
	}
	cout<<ans;
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}