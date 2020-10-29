#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n,k;cin>>n>>k;
	vector<ll> ans;
	int ok=0;
	if(k==1){
		cout<<n;
		return;
	}
	for(ll i=2;i*i<=n;++i){
		if(n%i==0){
			while(n%i==0 && k>1){
				ans.pb(i);
				n/=i;
				--k;
			}
			if(k==1 && n!=1){
				ans.pb(n);
				ok=1;
				k=0;
				break;
			}
			if(n==1 && k!=0){
				cout<<-1;
				return;
			}
		}
		if(ok)break;
	}
	if(ok || k==0){
		for(auto it:ans)cout<<it<<" ";
	}
	else
		cout<<-1<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}