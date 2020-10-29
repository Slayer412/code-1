#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
int isprime(ll n){
	if(n<2)
	return 0;
	if(n==2)
	return 1;
	
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
void solve()
{	int n,k;
	cin>> n >> k;
	ll ans=n;
	if(k==1)
	{
		for(int i=2;i<=n;i++){
			if(n%i==0)
			{	ans+=i;
				break;
			}
		}
		cout<<ans<<'\n';
		return;
	}
		if(ans%2){
				for(int i=2;i<=n;i++)
				{
					if(n%i==0)
					{
						ans+=i;
						n=i;
						--k;
						if(ans%2==0)
						break;
					}
				}
			if(ans%2==0){
				ans+=(k*2);
			}
		}
		else
		ans+=(k*2);
		cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

