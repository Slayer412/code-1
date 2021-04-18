//code by: Ravi Khatri @ravi_the_great
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
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;


void solve()
{
	string s;cin>>s;
	int n=sz(s);
	int cnt=0,x=0,y=0;
		f(i,0,n-1){
	    cnt+=(s[i]-'0');
	}
	if(cnt==0 || cnt==n){
	    cout<<-1<<endl;
	    return;
	}
	if(n%2){
	    cout<<-1<<endl;
	    return;
	}
	if(cnt==n/2){
	    cout<<0<<endl;
	    return;
	}
	int z=n-cnt;
	if((z+cnt)%2){
		cout<<-1<<endl;
		return;
	}
	else{
		int req=(n/2);
		int ans=min(abs(req-cnt),abs(req-z));
		cout<<ans<<endl;
	}
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}