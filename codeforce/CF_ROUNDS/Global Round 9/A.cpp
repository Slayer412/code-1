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
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int f=1;
	for(int i=0;i<n;i++){
		if(f){
			if(a[i]<0)
			a[i]=-1*a[i];
			f=0;
		}
		else{
			if(a[i]>0)
			a[i]=-1*a[i];
			f=1;
		}
	}
	for(int i=0;i<n;i++)cout<<a[i]<<' ';
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}