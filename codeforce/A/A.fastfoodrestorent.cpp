#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
void solve()
{	int cnt=0;
	int arr[3];
	cin>>arr[0]>>arr[1]>>arr[2];
	sort(arr,arr+3);
	int a=arr[2],b=arr[1],c=arr[0];
	
	if(a)
	{
		--a;
		++cnt;
	}
	if(b)
	{
		--b;
		++cnt;
	}
	if(c)
	{
		--c;
		++cnt;
	}
	if(a && b)
	{
		--a;--b;
		++cnt;
	}
	if(b && c)
	{
		--c;--b;
		++cnt;
	}
	if(a && c)
	{
		--a;--c;
		++cnt;
	}
	if( a && b && c)
	{
		--a;--b;--c;
		++cnt;
	}
	
	cout<<cnt<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

