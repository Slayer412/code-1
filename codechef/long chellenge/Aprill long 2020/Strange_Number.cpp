#include<bits/stdc++.h>
#define ll long long
using namespace std;  
int f(vector <ll > &arr,int n, int k) 
{ 
	int start = 0, end = 0, 
		count = 0, sum = arr[0]; 

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
	vector<ll> v(n);
	int zero=0;
	for(int i=0;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n;i++)
	{
		if(v[i]%4==0)
		v[i]=2;
		else if(v[i]%2==0)
		v[i]=1;
		else
		v[i]=0;
	}
	int total=(n*(n+1))/2;
	int k=2;
	int ans=total-f(v,n,2) + f(v,n,1);
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

