#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
int findi(vector<int> arr,int  k)
{	int n=arr.size();
	int start=0,end=0,res=0;
	int sum=arr[0];
	while(start<n && end<n)
	{
		if(sum<k)
		{
			++end;
			sum+=arr[end];
		}
		else if(sum>k)
		{
			sum-=arr[start];
			start++;
			
		}
		else if(start<end)
		res+=end-start,sum-=arr[start],++start;
	}
	return res;
}
void solve()
{
	int n,k;cin>>n>>k;
	vector<int> arr(n);
	for(int  i=0;i<n;i++)
	cin>>arr[i];
	int ans=findi(arr,k);
	cout<<ans<<"\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}