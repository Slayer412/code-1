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
	vi a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n-1;i>0;--i){
		if(a[i]<=a[i-1])continue;
		else{
			
			while(a[i]>=a[i-1] && i>0)--i;
			cout<<i<<'\n';
			return;
		}
	}
	cout<<0<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}