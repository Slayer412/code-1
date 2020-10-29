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
	vi a(n);
	int cnt=0;
	f(i,0,n-1)cin>>a[i];
	sort(a.begin(),a.end());
	for (int i = n-1; i >0; --i)
	{
		if(a[i]!=a[i-1]){
			++cnt;
		}
	}
	if(a[0]>0)++cnt;
	if(a[n-1]==0)cnt=0;
	cout<<cnt<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}