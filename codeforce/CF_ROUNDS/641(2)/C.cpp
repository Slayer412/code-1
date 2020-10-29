#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;

void solve()
{
	int n;cin>>n;
	ll a[n+5],ans[n+5],pref[n+5];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	ans[n]=a[n];
	for(int i=n-1;i>=1;i--){
		ans[i]=__gcd(a[i],ans[i+1]);
	}
	for(int i=1;i<n;i++){
		pref[i]=(a[i]*ans[i+1])/__gcd(a[i],ans[i+1]);
	}
	ll res=pref[1];
	for(int i=2;i<n;i++){
		res=__gcd(res,pref[i]);
	}
	cout<<res<<'\n';
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

