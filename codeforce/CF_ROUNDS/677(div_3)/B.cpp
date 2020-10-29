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
	int n;cin>>n;
	vi a(n);
	int f=n+1;
	int last=0;
	f(i,0,n-1){
		cin>>a[i];
		if(a[i]==1)
			f=min(f,i);
		if(a[i]==1)
			last=max(last,i);
	}
	if(f==last){
		cout<<0<<'\n';
		return;
	}
	int cnt=0;
	f(i,f,last){
		if(a[i]==0)++cnt;
	}
	cout<<cnt<<'\n';

	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}