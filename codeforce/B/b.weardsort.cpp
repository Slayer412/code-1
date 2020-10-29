#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
void solve()
{
	int n,m;
	cin>>n>>m;
	int arr[n],p[n]={0},pos;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<m;i++)
	{
		cin>>pos;
		p[pos-1]=1;
	}
	while(true)
	{
		bool ok=false;
		for(int i=0;i<n-1;i++)
		{
			if(p[i] && arr[i] > arr[i+1])
			{
				ok=true;
				swap(arr[i],arr[i+1]);
				
			}
		}
		if(!ok)
		break;
	}
	bool ok=true;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			ok=false;
			break;
		}
	}
	if(ok)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

