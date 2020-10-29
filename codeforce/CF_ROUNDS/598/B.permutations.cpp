#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vi v(n);
	set <int> s;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int vis[101]={0};
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n;j++){
			if(v[j]==i){
			int jj=j,k=j-1;
			while(k>=0 && v[jj]<v[k] && (vis[jj]==0 || vis[k]==0)){
			int temp=v[k];
			v[k]=v[jj];
			v[jj]=temp;
			vis[jj]=1;
			k--;
			jj--;
			}
			
			}
		}
	}
	for(int i=0;i<n;i++)cout<<v[i]<<" ";
	cout<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}
