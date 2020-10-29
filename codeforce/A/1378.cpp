#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{	
	ll n;cin>>n;
	if(n==0)
	cout<<1;
	else
	{
	int arr[]={6,8,4,2};
	cout<<arr[n%4];
	}
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

