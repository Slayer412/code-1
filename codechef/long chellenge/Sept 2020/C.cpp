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
void solve()
{
	int n;cin>>n;
	vi a(n+2);
	int mini=10,mx=-10;
	f(i,1,n)cin>>a[i];
	f(i,1,n){
		int cnt=1;
		int vis[6]={0};
		int t=a[i];
		f(j,1,i-1){
			if(a[j]>a[i]){
				t=max(t,a[j]);
				vis[j]=1;
			}
		}
		int tt=a[i];
		for(int j=i+1;j<=n;++j){
			if(a[j]<t)vis[j]=1,tt=min(a[j],tt);
		}
		f(j,1,i-1){
			if(a[j]>tt)vis[j]=1;
		}
		f(i,1,5)cnt+=vis[i],vis[i]=0;
		mini=min(mini,cnt);
		mx=max(mx,cnt);

	}
	cout<<mini<<" "<<mx<<'\n';


}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}