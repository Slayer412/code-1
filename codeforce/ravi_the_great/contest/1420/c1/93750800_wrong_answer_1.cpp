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
	int n,q;cin>>n>>q;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int sum=0,mx=a[0],f_mx=1;
	int last=a[0];
	f(i,1,n-1){
		if(f_mx){
			while(i<n-1 && a[i]<a[i+1])++i;
			sum+=a[i];
			last=a[i];
		//	cout<<f_mx<<" "<<a[i]<<"\n";
			f_mx=0;
		}
		else{
			while(i<n-1 && a[i]>a[i+1])++i;
			sum-=a[i];
			last=a[i];
		//	cout<<f_mx<<" "<<a[i]<<"\n";
			f_mx=1;
		}
		mx=max(mx,a[i]);
	}
	if(f_mx==1)
		sum+=last;
	cout<<max(mx,sum)<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}