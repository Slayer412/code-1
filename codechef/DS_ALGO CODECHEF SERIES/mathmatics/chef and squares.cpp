#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int mxn=1e8;
void solve()
{
	ll n;cin>>n;
	if(n==1){
		cout<<-1<<'\n';
		return;
	}
	for(ll i=1;i*i<=mxn;++i){
		ll x=n+(i*i);
		ll sq=ceil((double)sqrt(x));
		if((sq*sq)==x){
			cout<<x-n<<'\n';
			return;
		}
	}
	cout<<-1<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}