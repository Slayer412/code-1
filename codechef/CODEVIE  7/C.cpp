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
	int n,d;cin>>n>>d;
	vll a(n);
	ll sum=0;
	f(i,0,n-1)cin>>a[i],sum+=a[i];
	int dc=sum/d+1;
	int ans=INT_MAX;
	sort(a.rbegin(),a.rend());
	f(j,dc-1,dc+5){
		int cur=d;
		f(i,0,n-1){
			if(cur<=0){
				cur=-1;
				break;
			}
			int c=ceil((double)a[i]/j);
			cur-=c;
		}
		if(cur>=0)ans=min(ans,j);
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}