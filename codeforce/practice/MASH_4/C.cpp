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
	int n,m;cin>>n>>m;
	if(n==1){
		cout<<1;
		return;
	}
	if(m-1 < n-m){
		cout<<m+1;
	}
	else
	cout<<m-1;
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}