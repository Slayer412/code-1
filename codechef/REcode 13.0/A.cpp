#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
		int n;cin>>n;
		int arr[n];
		int ans=INT_MAX;
		int mx=-1;
		int cnt=0;
		int vis[10002]={0};
		for(int i=0;i<n;i++)
		cin>>arr[i];
		for(int i=0;i<n-2;i++)
		{	cnt=1;
			if(!vis[arr[i]]){
				vis[arr[i]]=1;
				for(int j=i+2;j<n;j++){
					if(arr[j]==arr[i])
					cnt++,j++;
				}
				cout<<arr[i]<<" "<<cnt<<'\n';
			}
			else
			continue;
			if(cnt>mx)
			{
				mx=cnt;
				ans=arr[i];
			}
			
		}
		cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}