#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	vi a(101);
	int x;
	int mx=-1;
	for(int i=0;i<n;i++){
		cin>>x;
		mx=max(mx,x);
		a[x]=1;
	}
	int kk=k;
	int ans=0;
	for(int i=1;i<=max(n,max(kk,mx));i++){	
		if(k==0 && !a[i])
		break;
		if(a[i])
		ans++,--a[i];
		else if(!a[i] && k)
		ans++,--k;
		
	}
	if(k)ans+=k;
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}