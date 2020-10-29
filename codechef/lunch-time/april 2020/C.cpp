#include<bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const int mod= 998244353;
const int mxn=1e5;
vll power(mxn);
void power2()
{   power[0]=1;
    for(int i=1;i<=1e5;i++)
    {
        power[i]=(power[i-1]*2)%mod;
    }
}
void solve()
{   
	ll n;cin>>n;
	unordered_map <ll,ll> counts;
	ll ele;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		counts[ele]++;
	}
	ll prod=1,sum=0,ans=0;
	ll Newmex;
	for(int  mex=1;mex<=n+1;mex++)
	{
		sum=(sum+counts[mex])%mod;
		
		Newmex=(mex*prod)%mod;
		Newmex=(Newmex*(power[n-sum]))%mod;
		
		ans=(ans+Newmex)%mod;
	
		prod=(prod*((power[counts[mex]])-1))%mod;
		
	}
	cout<<ans<<'\n';
}
int main()
{   speed;
    power2();
	int t;cin>>t;
	while(t--)
	solve();
}
