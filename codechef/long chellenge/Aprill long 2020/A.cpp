#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int f=1;
	int n,cnt=0;
	cin>>n;
	int arr[n],one=0;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		{	++one;
			while(arr[++i]==0)
			{
				++cnt;
				if(arr[i]==1)
				break;
			}
			if(arr[i]==1)
			{	
				if(cnt<=4)
				{
					f=0;
					break;
				}
				else
				cnt=0;
			}
			--i;
		}	
	}
	if(f)cout<<"YES\n";
	else cout<<"NO\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

