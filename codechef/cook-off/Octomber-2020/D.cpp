#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll D;cin>>D;
	vector<int> ans{1};
	while(D>0){
		int x=min(D,(ll)(100*1000)-2);
		ans.push_back(x+2);
		ans.push_back(x+1);
		ans.push_back(1);
		D-=x;
	}
	cout<<ans.size()<<'\n';
	for(int x:ans)cout<<x<<" ";
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}