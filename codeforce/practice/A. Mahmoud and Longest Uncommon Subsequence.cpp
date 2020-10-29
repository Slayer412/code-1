#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	string a,b;
	cin>>a>>b;
	if(a==b){
		cout<<-1<<'\n';
		return;
	}
	int n=a.length(),m=b.length();
	int maxn=max(n,m);
	cout<<maxn<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}