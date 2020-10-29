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
	map< pair<int,pair<int,int> >,int> mp;
	f(i,0,n-1)cin>>a[i];
	int ans=0;
	f(i,0,n-1){
		f(j,i,n-1){
			f(k,j,n-1){
				if(a[i]!=a[j] && a[j]!=a[k] && a[i]!=a[k] && !mp[{a[i],{a[j],a[k]}}]){
					if(a[i]+a[j]>=a[k] || (a[i]+a[k]>=a[j]) || (a[j]+a[k])>=a[i]){
					//	cout<<i<<" "<<j<<" "<<k<<'\n';
						++ans;
						mp[{a[i],{a[j],a[k]}}]++;
					}
				}
			}
		}
	}
	cout<<ans;
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}