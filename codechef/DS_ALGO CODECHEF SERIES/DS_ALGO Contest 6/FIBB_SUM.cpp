#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const int mod=1e9+7;

void multiply(ll F[2][2],ll M[2][2]){
	ll x=F[0][0]*M[0][0] + F[0][1]*M[1][0];
	ll y=F[0][0]*M[0][1] + F[0][1]*M[1][1];
	ll z=F[1][0]*M[0][0] + F[1][1]*M[1][0];
	ll w=F[1][0]*M[0][1] + F[1][1]*M[1][1];
	F[0][0]=x%mod;
	F[0][1]=y%mod;
	F[1][0]=z%mod;
	F[1][1]=w%mod;
	
}
void power(ll F[2][2],ll n)
{   ll M[2][2]={{1,1},{1,0}};
    while(n>0)
    {
        if(n%2)
        multiply(F,M);
        n/=2;
        multiply(M,M);
    }
}
ll fib(ll n){
	n-=1;
	ll F[2][2]={{1,1},{1,0}},M[2][2]={{1,1},{1,0}};
    power(F,n);
    return (F[0][0]-1);
}
void solve()
{
	ll n,k;cin>>n>>k;
	ll rem=n%k,p=(int)n/k;
	ll ans=0;
	ans+=(fib(k)*p)%mod;
	ans+=fib(rem)%mod;
	ans=ans%mod;
	
	cout<<ans<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

