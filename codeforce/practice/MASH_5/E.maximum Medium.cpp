#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N=2e5+2;
int n,k;

bool check(vi &a,int x){
	ll moves=0;
	for(int i=n/2;i<n;i++){
		if(x-a[i]>0)
		moves+=(x-a[i]);
		if(moves>x)return false;	
	}
	if(moves<=x)return true;
	return false;

}
void solve()
{
	cin>>n>>k;
	vi a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	
	sort(a.begin(),a.end());
	ll l=1,r=1e9;
	while(l<r){
		ll mid=(l+r)/2;
		if(check(a,mid))
		l=mid;
		else
		r=mid-1;
	}
	cout<<l<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}