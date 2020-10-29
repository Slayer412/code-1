#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,k,x,y;cin>>n>>k>>x>>y;
	int vis[n+1]={0};
	int ele=0;
	for(int i=x;i<n;){
		if(!vis[i]){
		vis[i]=1;
		i=(i+k)%n;
		}
		else{
			break;
		}
	}
	if(vis[y]){
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}