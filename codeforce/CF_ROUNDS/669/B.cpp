#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
// r
int gcd(int a, int b){
	if(a==0)return b;
	return gcd(b%a,a);
}
void solve()
{
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	sort(a.begin(),a.end());
	vi ans;
	ans.pb(a[n-1]);
	ll g=a[n-1];
	int vis[1000]={0};
	vis[n-1]=1;
	for (int i = 0; i < n-1; ++i)
	{	int mx=-1,ind=-1,take=-1;
		f(j,0,n-1){
			if(!vis[j]){
				int gc=gcd(g,a[j]);
				if(mx<=gc){
					if(mx==gc){
						if(take<a[j]){
							take=a[j];
							ind=j;	
						}
					}
					else{	
						mx=gc;
						ind=j;
						take=a[j];
					}
				}
			}
		}
		if(ind!=-1){
		ans.pb(take);
		g=gcd(g,mx);
		vis[ind]=1;
		}
	}
	f(i,0,ans.size()-1)cout<<ans[i]<<" ";
	cout<<"\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}