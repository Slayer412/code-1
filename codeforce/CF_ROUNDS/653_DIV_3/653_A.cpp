#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll x,y,n;cin>>x>>y>>n;
	
	if(n%x==y){
		cout<<n<<'\n';
		return;
	}
	if(x>n){
		cout<<y<<'\n';
		return;
	}
	if((n%x)>=y){
		cout<<n-(abs(n%x-y))<<'\n';
	}
	else{
		//cout<<"HERE\n";
		cout<<(n-x+(y-((n-x)%x)))<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}