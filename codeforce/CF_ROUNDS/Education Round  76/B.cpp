#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll x,y;cin>>x>>y;
	if(x==y){
		cout<<"YES\n";
		return;
	}
	if(x>y){
		cout<<"YES\n";
		return;
	}
	if(x==1){
		cout<<"NO\n";
		return;
	}
	if(x==3){
		cout<<"NO\n";
		return;
	}
	if(x==2){
		if(y==1 || y==3){
			cout<<"YES\n";
		}
		else
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}