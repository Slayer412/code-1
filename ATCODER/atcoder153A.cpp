	#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int a,b;
	cin>>a>>b;
	if(a>b)
	{
		if(a%b)
		cout<<a/b+1;
		else
		cout<<a/b;
	}
	else
	cout<<1;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

