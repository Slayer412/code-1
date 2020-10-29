#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
int power(ll x, unsigned int y) 
{ 
    ll res = 1;     // Initialize result 
   
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = res*x%mod; 
   
        // y must be even now 
        y = y>>1; // y = y/2 
        x = x*x%mod;  // Change x to x^2 
    } 
    return res%mod; 
}
void solve()
{
	ll n,k;
	cin>>n>>k;
	ll ans=0,prod=1;
	for(int i=0;i<n;i++)
	{
		int add=power(((k*prod)%mod),2*i+1);
		ans=(ans%mod+add%mod)%mod;
		prod=(add%mod*prod%mod)%mod;
	}
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

