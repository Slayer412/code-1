#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vll a(n+1),r(n+1,1),l(n+1,1);
	ll ans=1;
	
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n==2){
		if(a[1]<a[2])
		cout<<2<<'\n';
		else
		cout<<1<<'\n';
		return;
	}
	for(int i=2;i<=n;i++){
		if(a[i-1]<a[i])
		l[i]=l[i-1]+1;
		ans=max(ans,l[i]);
	}
	for(int i=n-1;i>=1;i--){
		if(a[i]<a[i+1])
		r[i]=r[i+1]+1;
		ans=max(ans,r[i]);
	}
	for(int i=2;i<n;i++){
	
		if(a[i-1]<a[i+1])
		ans=max(ans,l[i-1]+r[i+1]);
	}
	cout<<ans<<'\n';
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

