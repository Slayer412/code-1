#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;i++)
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	ll x,y,k;cin>>x>>k>>y;
	vi a(n+2),b(n+2);
	f(i,0,n-1)cin>>a[i];
	f(i,0,m-1)cin>>b[i];
	if(m>n){
		cout<<-1<<'\n';
		return;
	}
	if(m==n){
		if(a==b){
			cout<<"0\n";
		}
		else
		cout<<-1<<'\n';
		return;
	}
	int j=0;
	ll cost=0;
	bool ok=false;
	for(int i=0;i<a.size();){
		if(a[i]!=b[j]){
			int len=0;
			while(a[i]!=b[j] && i<n){
			++i,++len;
			if(i==n-1)
			break;
			}
			if(b[m-1]==a[i]){
				ok=true;
			}
		//	cout<<"I "<<i<<'\n';
			if(len<k)
			cost+=(ll)len*1LL*y;	
			else
			cost+=min((ll)len*y,(ll)(len/k)*x + (len%k)*y);
		
		}
		++i,++j;	
	}
	if(ok)
	cout<<cost<<'\n';
	else
	cout<<-1<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

