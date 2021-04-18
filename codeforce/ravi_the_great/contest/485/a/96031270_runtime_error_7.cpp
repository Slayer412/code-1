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
	int a,n;cin>>a>>n;
	vi vis(1e6);
	while(1){
		int x=a%n;
		if(x==0){
			cout<<"Yes\n";
			return;
		}
		if(!vis[x]){
			a+=x;
			vis[x]=1;
		}
		else{
			cout<<"No\n";
			return;
		}
	}
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}