#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,k;cin>>n>>k;
	vector< vector<int> > a(n+1,vector<int> (n+1));
	int p=0,q=0;
	for(int i=0;i<k;i++){
		a[p][q]=1;
		++p,++q,q=q%n;
		if(p==n)p=0,q=(q+1)%n;
	}
	if(k%n==0)cout<<0<<'\n';
	else
	cout<<2<<'\n';
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)cout<<a[i][j];
		cout<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}