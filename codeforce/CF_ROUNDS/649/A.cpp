#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,x;cin>>n>>x;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int l=-1,r=0;
	ll sum=0;
	for(int i=0;i<n;i++){
		if(a[i]%x){
			if(l==-1)
			l=i;
			r=i;
		}
		sum+=a[i];
	}
	if(l==-1)
	cout<<-1<<'\n';
	else if(sum%x)
	cout<<n<<'\n';
	else
	cout<<n-min(l+1,n-r)<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}