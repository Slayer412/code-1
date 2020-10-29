#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int ans[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if((i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==0 ) || (i==n-1 && j==m-1))
			ans[i][j]=2;
			else if(i!=0 && j!=0 && i!=n-1 && j!=m-1)
			ans[i][j]=4;
			else if(i==0 || j==0  || i==n-1 || j==m-1)
			ans[i][j]=3;
		}
	}
	bool ok=true;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]>ans[i][j]){
				ok=0;
			}
		}
	}
	if(!ok){
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}