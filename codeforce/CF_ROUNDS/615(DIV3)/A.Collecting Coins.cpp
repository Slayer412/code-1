#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	ll a[3],n;
	cin>>a[0]>>a[1]>>a[2]>>n;
	sort(a,a+3);
	n=n-(a[2]-a[0]);
	n=n-(a[2]-a[1]);
	if(n%3==0 && n>=0)cout<<"YES\n";
	else
	cout<<"NO\n";
	
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

