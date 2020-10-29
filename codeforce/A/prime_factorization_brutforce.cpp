#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	if(n%2==0)
	{
		int x=n/2;
		cout<<n/2<<"\n";
		while(x--)cout<<2<<" ";
	}
	else
	{
		cout<<(n-3)/2+1<<"\n";
		int x=(n-3)/2;
		while(x--)cout<<2<<" ";
		cout<<"3";
	}
	
	
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

