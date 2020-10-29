#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	ll n;cin>>n;
	if( n%5 )
	cout<<-1<<endl;
	else if(!n%5 && n%10)
	cout<<1<<endl;
	else if(!n%10)
	cout<<0<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

