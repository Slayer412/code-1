#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int c,m,x;cin>>c>>m>>x;
	int teams=min(c,min(m,(c+m+x)/3));
	cout<<teams<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}