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
	vll a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i=n/2;i<n-1;i++){
		if(k>=a[i+1]-a[i])
		k-=(a[i+1]-a[i]),a[i]=a[i+1];
		else{
			break;
		}
	}
	int i=n-1;
	while(i>n/2){
		if(a[i]!=a[i-1]){
			if(a[i]-a[i-1]<=k){
				k-=(a[i]-a[i-1]);
				a[i-1]=a[i];
				
			}
			else
			break;
		}
		--i;
	}
	ll ans=a[n/2]+(k/((n+1LL)/2LL));
	cout<<ans;
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}