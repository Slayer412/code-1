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
	int n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int height=1;
	f(i,1,n-1){
		if(a[i]<=a[i+1])
			continue;
		else
			++height;
	}
	cout<<height<<'\n';

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}