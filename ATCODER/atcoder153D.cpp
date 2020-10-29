#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	ll H;
	cin>>H;
	ll sum=0;
	for(int i=0;;i++)
	{
		if(H >= 1ll<<i)
		sum+=(1ll<<i);
		else
		break;
	}
	cout<<sum<<endl;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

