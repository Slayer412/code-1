#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const ull mx=1e18;
void solve()
{	
		int n;cin>>n;
		vector< unsigned long long > a(n);
		int f=0;
		for(ull &x:a){
			cin>>x;
			if(!x)
			f=1;
		}
		if(f){
			cout<<0<<'\n';
			return;
		}
		ull ans=1;
		for(ll x:a){
			
			if(ans<=(mx/x))
			ans*=x;
			else{
				cout<<-1<<'\n';
				return;
			}
			
		}
		cout<<ans<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}