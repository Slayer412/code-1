#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
// r
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	f(i,0,n-2){
		if(a[i]!=a[i+1]){
			if(i<n-2 && a[i]==a[i+2]){
				a[i]=-1;
			}
			else
				a[i+2]=-1;
		}
	}
	f(i,0,n-1){
		if(a[i]!=-1)cout<<a[i]<<" ";
	}
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}