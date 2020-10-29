#include<iostream>
using namespace std;
#define ll long long
void solve()
{
	ll a,b;
	cin>>a>>b;
	if(a>b)
	{
		if(!((a-b)%2))
		cout<<1<<endl;
		else
		cout<<2<<endl;
	}
	else if(a<b)
	{
		if((b-a)%2)
		cout<<1<<endl;
		else
		cout<<2<<endl;
	}
	else
	cout<<0<<endl;

}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

