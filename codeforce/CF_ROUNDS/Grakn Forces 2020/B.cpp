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
int fnc(vi a,int n,int i,int k){

}
void solve()
{
	int n,k;cin>>n>>k;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int mx=-1;
	if(k==1){
		bool yes=true;
		f(i,0,n-1)if(a[i]!=a[0])yes=false;
		if(yes)cout<<1<<'\n';
		else
			cout<<-1<<'\n';
	}
	else{
		int cnt=0;
		f(i,0,n-2)if(a[i]!=a[i+1])++cnt;
		int ans=(cnt+k-2)/(k-1);
		cout<<max(ans,1)<<'\n';
	}

	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}