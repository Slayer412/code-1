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
	ll n,k;cin>>n>>k;
	ll sum=0;
	vector<ll> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];	
		sum+=a[i];
	}
	sort(a.begin(),a.end());
	int i=0;
	while(k){
		//cout<<sum<<" "<<a[i]<<'\n';
		if(a[i]<0){
			sum-=a[i];
			sum+=abs(a[i]);
			a[i]=-a[i];
			if(a[i]>a[i+1] && i<n)
			++i;
		}
		else{
			sum-=a[i];
			sum-=a[i];
			a[i]=-a[i];
			if(a[i]>a[i+1] && i<n)
			++i;
		}
		if(i==n){
			sort(a.begin(),a.end());
			i=0;
		}
		--k;
	}
	cout<<sum<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}