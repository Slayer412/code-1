#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
int n;
int find(int x,vi arr)
{	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		return i;
	}
	return n+1;
}
void solve()
{
	cin>>n;
	vi a(n);
	vll b(n);
	int f=1;
	int one=n,minus_one=n,zero=n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cin>>b[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]==0 &&  zero==n)
		zero=i;
		if(a[i]==1 && one==n)
		one=i;
		if(a[i]==-1 && minus_one==n)
		minus_one=i;
		if(zero!=n && one!=n && minus_one!=n)
		break;
	}
	if(a[0]!=b[0])
	cout<<"NO\n";
	else
	{
	for(int i=1;i<n;i++)
	{	if(a[i]==b[i])
		continue;
		if(b[i]==0)
		{
			if(a[i]==-1)
			{
				if(one>=i)
				{
					f=0;
					break;
				}
				
			}
			else
			{
				if(minus_one>=i)
				{
					f=0;
					break;
				}
			}
		}	
		else if(b[i]>0)
		{
			if(one>=i)
			{	
				f=0;
				break;
			}
		}
		else
		{
			if(minus_one>=i){
			f=0;
			break;
			}
		}
	}
	if(f)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

