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
	string s;cin>>s;
	int n=s.size();
	int cnt=0;
	int B=0;
	f(i,0,n-1){
		if(cnt==0){
			if(s[i]=='B')++B;
		}
		if(s[i]=='A')++cnt;
		else if(cnt>0)--cnt;
	}
	cout<<cnt+B%2<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}