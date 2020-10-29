#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	ll n;
	cin>>n;
	ll temp=n;
	int a[32]={0};
	int i=0;
	while(n!=0)
	{
		a[i]=n%2;
		n/=2;
		++i;
	}
	int cnt=0;
	for(int i=1;i<=temp;++i)
	{
		int arr[32]={0};
		int j=0;
		while(n!=0)
		{
		arr[i]=n%2;
		n/=2;
		++j;
		}
		if(arr[j]!=a[j] && arr[j-1]!=a[j-1])
		cnt++;	
	}
	cout<<cnt<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

