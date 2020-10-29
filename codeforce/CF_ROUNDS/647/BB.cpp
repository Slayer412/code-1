#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	int mx=-1;
	int vis[1024]={0};
	int cnt=0;
	int ans=-1;
	for(int i=0;i<n;i++)cin>>a[i],vis[a[i]]++;
	for(int i=1;i<=1023;i++){
		cnt=0;
		for(int j=0;j<n;j++){
			int temp=i^a[j];
			if(vis[temp]==0)
			break;
			cnt++;
		}
		if(cnt==n){
			cout<<i<<'\n';
			return;
		}
	}
	cout<<-1<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}