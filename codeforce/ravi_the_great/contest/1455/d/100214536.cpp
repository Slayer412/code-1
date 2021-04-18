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

bool not_sorted(vi &a){
	int n=sz(a);
	f(i,1,n-1){
		if(a[i]<a[i-1])return 1;
	}
	return 0;
}
void solve()
{
	int n,x;cin>>n>>x;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int cnt=0;
	while(not_sorted(a)){
		int i=0;
		++cnt;
		while(i<n && a[i]<=x){
			++i;
		}
		if(i==n){
			cout<<-1<<endl;
			return;
		}
		else
		swap(a[i],x);
		
	}
	cout<<cnt<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}