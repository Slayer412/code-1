#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int a,b;cin>>a>>b;
	if(a<b)
	{
		while(b--)
		cout<<a;
	}
	else
	while(a--)cout<<b;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

