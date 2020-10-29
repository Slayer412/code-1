#include<bits/stdc++.h>
#define ll long long
using namespace std;  
int findSubarraySum(vector<ll> arr, int n, int sum) 
{ 
	unordered_map<int, int> prevSum; 

	int res = 0; 

	int currsum = 0; 

	for (int i = 0; i < n; i++) { 
		currsum += arr[i];
		if (currsum == sum) 
			res++;
		if (prevSum.find(currsum - sum) != 
								prevSum.end()) 
			res += (prevSum[currsum - sum]); 
		prevSum[currsum]++; 
	} 

	return res; 
} 

ll f(vector <ll > &arr,int n, int k) 
{ 
	int start = 0, end = 0;
	ll count = 0,sum = arr[0]; 

	while (start < n && end < n)
	{
		if (sum < k)
		{ 
			end++; 
			if (end >= start) 
				count += end - start; 
			if (end < n) 
				sum += arr[end]; 
		} 
		else 
		{   
			sum -= arr[start]; 
			start++; 
		} 
	} 
	return count; 
}
void solve()
{
	int n;cin>>n;
	vector<ll> v;
	ll x,ans=0,temp=0;
	int z=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x%4==0)
		x=2;
		else if(x%2==0)
		x=1;
		else 
		x=0;
		v.push_back(x);
	}
	ll total=(n*(n+1))/2;
	ll sum1=f(v,n,2);
	ans=total-sum1;
	for(int i=0;i<n;i++)
	{   
		if(v[i]==0)++z;
		else if(z)
		{
		    ans+=((z*(z+1))/2);
		    z=0;
		}
	}
	if(z)
	ans+=(z*(z+1))/2;
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

