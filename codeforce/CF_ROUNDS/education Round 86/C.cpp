#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
	if(b==0)
	return a;
	else
	return gcd(b, a % b);
	
}
ll find(ll r,ll lcm,ll b)
{
	ll div=r/lcm;
	ll last=div*lcm;
	ll total=r;
	if(div!=0)
	{
		total=total-(div-1)*b;
		
		total=total-min(b,r-last+1);
	}
	return total-min(r,b-1);
}
void solve()
{
	ll a,b,q;
	cin>>a>>b>>q;
	if(a>b)swap(a,b);
	ll lcm=a*b;
	lcm/=gcd(a,b);
	while(q--)
	{
		ll l,r;
		cin>>l>>r;
		if(lcm==b || r<b){
		cout<<0<<" ";
		continue;
		}	
		ll ans=find(r,lcm,b);
		if(l>0)
		ans-=find(l-1,lcm,b);
		
		cout<<ans<<" ";
	}
	cout<<'\n';

}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

