#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;i++)
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	sort(a.rbegin(),a.rend());
	f(i,0,n-1)cout<<a[i]<<" ";
	cout<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

