#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	int arr[n];
	vector <int>v;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{	if(i==n-2 && arr[i]<arr[i+2])
		{
			int j=i+1;
			int k=i+1;
			while(j-- && j>0)
			cout<<arr[k]--<<" ";
		}
		else if(arr[i]<arr[i+1])
		cout<<"\n";
		else
		{	int j=i+1;
			while(j--)
			cout<<arr[i]--<<" ";
		}
			}
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

