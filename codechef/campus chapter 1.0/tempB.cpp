#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll a,b;
	cin>>a>>b;
	bitset<64>bit(b);
	int bits=log2(max(a,b)) +1;
	int arr[bits]={0};
	for(int i=0;i<=bits;i++)
	arr[i]=bit[i];
	for(int i=0;i<bits;i++)cout<<arr[i]<<" ";
	ll x=b;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

