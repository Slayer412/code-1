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
	vi a(n),pos(n);
	vi ans(n);
	multiset<int> s;
	f(i,0,n-1)cin>>a[i];
	f(i,0,n-1){
		cin>>pos[i];
		if(pos[i]==0){
			s.insert(a[i]);
		}
	}
	f(i,0,n-1){
		if(pos[i]==0){
			auto it=s.end();
			--it;
			ans[i]=*it;
			s.erase(it);
		}
		else
			ans[i]=a[i];
		cout<<ans[i]<<" ";
	}
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}