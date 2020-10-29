#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	ll a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cin>>b[i];
	sort(a,a+n);
	sort(b,b+n);
	if(b[n-1]>a[n-1] || a[n-1] > b[n-1])
	cout<<"YES\n";
	else
	cout<<"NO\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

