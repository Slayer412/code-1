#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int n;cin>>n;
	int arr[n];
	int cnt=1;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min){
		++cnt;
		min=arr[i];
		}
	}
	cout<<cnt;
	
}
int main()
{
	solve();
}

