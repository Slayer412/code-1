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
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;


void solve()
{
	int n;cin>>n;
	vi a(n+1);
	map< int,int> mp;
	int map[n+1];
	f(i,1,n){
		cin>>a[i];
		map[a[i]]=i;
		mp[a[i]]++;
	}
	for(auto it:mp){
		if(it.S==1){
			cout<<map[it.F]<<endl;
			return;
		}
	}
	cout<<-1<<endl;

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}