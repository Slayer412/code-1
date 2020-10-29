#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	int mini=1e9+5;
	set<int> s;
	f(i,0,n-1){
		int x;
		cin>>x;
		s.insert(x);
	}
	cout<<(int)s.size()<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}