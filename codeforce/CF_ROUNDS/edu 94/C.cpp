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
	string s;int x;cin>>s>>x;
	int n=s.length();
	char ans[n+1];
	f(i,1,n)ans[i]='1';
	ans[0]='R';
	s='R'+s;
	
	f(i,1,n){
		if(s[i]=='0'){
			if(i>x)
				ans[i-x]='0';
			if(i+x<=n)ans[i+x]='0';
		}
	}
	f(i,1,n){
		if(i>x && ans[i-x]=='0' && i+x<=n && ans[i+x]=='0' && s[i]=='1'){
			cout<<-1<<'\n';
			return;
		}
		else if(i<x){
			if(i+x<=n){
				if(ans[i+x]=='0' && s[i]=='1'){
					cout<<-1<<'\n';
					return;
				}
			}
		}

	}
	f(i,1,n)cout<<ans[i];
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}