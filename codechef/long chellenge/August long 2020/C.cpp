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
	int a,b;cin>>a>>b;
	int ad=ceil((double)a/9);
	int bd=ceil((double)b/9);
	if(ad<bd)
		cout<<0<<" "<<ad<<'\n';
	else
	cout<<1<<" "<<bd<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}