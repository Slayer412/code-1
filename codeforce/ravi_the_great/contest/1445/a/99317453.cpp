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
	int n,x;
	cin>>n>>x;
	vi a(n),b(n);
	multiset<int> s;
	f(i,0,n-1)cin>>a[i];
	f(i,0,n-1)cin>>b[i],s.insert(b[i]);
	sort(all(a));
	sort(all(b));
	f(i,0,n-1){
		int find=x-a[i];
		int mx=0;
		int ind=-1;
		for(int j=0;j<n;j++){
			if(b[j]<=find){
				if(mx < b[j])
				{
					ind=j;
					mx=b[j];
				}			
			}
		}
		if(ind==-1){
				cout<<"No\n";
				return;
			}
			b[ind]=INT_MAX;
	}	
	cout<<"Yes\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}