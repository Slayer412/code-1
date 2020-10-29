#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	ll n,k;cin>>n>>k;
	ll ans=INT_MAX;
	if(n<=k){
		cout<<1<<'\n';
		return;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			if(i<=k)
			{
				ll temp=n/i;
				ans=min(ans,temp);
			}
		}
		if(n%(n/i)==0){
			if((n/i)<=k){
				ll temp=n/(n/i);
				ans=min(ans,temp);
			}
		}
	}
	if(ans==INT_MAX)
	cout<<n<<'\n';
	else
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}