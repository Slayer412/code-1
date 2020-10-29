#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;


void solve()
{ 
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int sum=0;
	int ans=0;
	for(int i=2;i<=2*n;i++){
		sum=0;
		int vis[51]={0};
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(j!=k && !vis[k] && !vis[j]){
					if(a[j]+a[k]==i){
						++sum;
						vis[k]=1;
						vis[j]=1;
						break;
					}
				}
			}
		}
		ans=max(ans,sum);
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}