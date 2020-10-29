#include<iostream>
using namespace std;
#define ll long long
const int mod=1000000007;
int power(int a,int n)
{
	ll res=1;
	n/=2;
	while(n)
	{
		if(n%2)
		res=(res*a)%mod;
		a=(a*a)%mod;
		n/=2;
	}
	return res;
}
void solve()
{
	int n;cin>>n;
	cout<<power(2,n)<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

