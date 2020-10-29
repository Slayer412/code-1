#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long


int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int maxe=0,maxo=0;
	int mxe=0,mxo=0;
	int ans=0,res=0
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	for(int i=0;i<n;i++)
	{	for(int j=0;j<m;j++)
			{
				if(arr[i][j]%2)
				maxo++;
				else
				maxe++;
				if(arr[j][i]%2)
				mxo++;
				else
				mxe++;
			}
			ans=max(max0,mxo);
			res=max(maxe,mxe);
	}
	cout<<ans<<" "<<res;
}

