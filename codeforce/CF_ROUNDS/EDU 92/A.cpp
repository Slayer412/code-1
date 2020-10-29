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
	ll a,b;cin>>a>>b;
	ll aa=max(a,b);
	ll bb=min(a,b);
	if(bb+bb>aa){
		cout<<-1<<" "<<-1<<'\n';
	}
	else{
		cout<<bb<<" "<<bb+bb<<"\n";
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}