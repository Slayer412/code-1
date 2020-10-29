#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	ll n,k;cin>>n>>k;
	if(k>n)
	cout<<"NO\n";
	else if(n%k==0)
	{	int t=k;
		cout<<"YES\n";
		while(t--)
		cout<<n/k<<" ";
		cout<<'\n';
	}
	else if((n%2 && k%2)  || (n%2==0 && k%2==0))
	{	int t=k;
		if((n-(k-1))%2){
		cout<<"YES\n";
		while(--t)
		cout<<1<<" ";
		--k;
		//cout<<n-k<<"SDISD\n";
		cout<<n-k<<'\n';
		}
		else
		cout<<"NO\n";
	}
	else if(n%2==0 && k%2){
		ll x=n/k;
		//cout<<x<<'\n'<<n-(k-1)*x<<'\n';
		if(((n-((k-1)*x))%2==0 && x%2==0) || (x%2 && (n-((k-1)*x))%2)){
			ll t=k-1;
			cout<<"YES\n";
			while(t--)
			cout<<x<<' ';
			cout<<n-((k-1)*x)<<'\n';
		}
		else if(2*(k-1)<n && (n-(2*(k-1)))%2==0){
			int t=k;
			cout<<"YES\n";
			while(--t)
			cout<<2<<' ';
			cout<<(n-(2*(k-1)))<<'\n';
		}
		else
		cout<<"NO\n";
	}
	else
	{
		ll x=n/k-1;
		if(x<=0)
		cout<<"NO\n";
		else if(((x%2 && (n-((k-1)*x))%2)) || (x%2==0 && (n-((k-1)*x))%2==0))
		{	int t=k;
			cout<<"YES\n";
			while(--t)
			cout<<x<<" ";
			cout<<(n-((k-1)*x))<<'\n';
		}
		else
		cout<<"NO\n";
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

