#include<bits/stdc++.h>
#define ll long long
using namespace std;
int isprime(ll x)
{
	for(int i=2;i*i<=x;++i)
	{
		if(x%i==0 || x%(x/i)==0)
		return 0;
	}
	return 1;
}
void solve()
{
	int n;cin>>n;
	for(int i=1;i<=1000;i++)
	{
		if(!isprime(n*i+1))
		{
			cout<<i;
			return;
		}
	}
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

