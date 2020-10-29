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
	ll n,m;
	cin>>n>>m;
	vi a(n),b(m);
	f(i,0,n-1)cin>>a[i];
	f(i,0,m-1)cin>>b[i];
	for(int k=0;k<= (1<<9) ;++k){
		int cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(((a[i]&b[j])|k)==k){
					cnt++;
				//	cout<<k<<" "<<((a[i]&b[j])|k)<<'\n';
					break;
				}
			}
		}
		if(cnt==n){
			cout<<k<<'\n';
			return;
		}
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}