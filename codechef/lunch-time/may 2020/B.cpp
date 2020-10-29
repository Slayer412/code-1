#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	ll sum=0;
	vi a(n),b(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cin>>b[i];
	vi alic(n+1,0),bob(n+1,0);
	for(int i=0;i<n;i++){
		if(i==0 && a[i]==b[i])
		sum+=a[i];
		alic[i+1]=alic[i]+a[i];
		bob[i+1]+=bob[i]+b[i];
	}
	
	for(int i=2;i<=n;i++){
		if(alic[i]==bob[i] && alic[i-1]==bob[i-1])
		sum+=alic[i]-alic[i-1];
	}
	cout<<sum<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}