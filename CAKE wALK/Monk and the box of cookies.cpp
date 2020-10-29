#include<iostream>
#include<bitset>
#include<algorithm>
using namespace std;
#define ll long long

void solve()
{
	int n,x;cin>>n;
	int arr[32]={0};
	for(int i=0;i<n;i++)
	{
		cin>>x;
		bitset<32> bit(x);
		for(int i=0;i<32;i++)
		if(bit[i])arr[i]++;
	}
	int mx=arr[0],inx=0;
	for(int i=1;i<32;i++)
	{
		if(arr[i]>mx)
		mx=arr[i],inx=i;
	}
	cout<<inx;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

