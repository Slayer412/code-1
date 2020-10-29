#include<iostream>
using namespace std;
#define ll long long

int main()
{
	ll n,r,b;
	cin>>n>>b>>r;
	ll ans=(b%n)+(n%(r+b));
	if(b==0)
	cout<<0;
	else
	cout<<ans<<endl;
}

