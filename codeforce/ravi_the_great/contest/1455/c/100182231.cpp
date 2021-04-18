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


void solve()
{
	int x,y;cin>>x>>y;
	int alice=0,bob=0;
	if(x>1){
		alice=x-1;
	}
	if(y==0)
	alice=x;
	else if(x==0)
	alice=0;
	bob=y;
	cout<<alice<<" "<<bob<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}