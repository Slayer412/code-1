#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll a,b,c;
	cin>>a>>b>>c;
	if(a<c){
		cout<<1<<' ';
	}
	else
	cout<<-1<<' ';
	if(b*a > c )
	cout<<b;
	else
	cout<<-1;
	cout<<'\n';
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}