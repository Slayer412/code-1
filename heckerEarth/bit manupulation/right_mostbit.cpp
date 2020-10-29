#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int arr[50];
	arr[0]=0;
	for(int i=1;i<=50;i++)
	arr[i]=arr[i-1]^i;
	for(int i=0;i<51;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

