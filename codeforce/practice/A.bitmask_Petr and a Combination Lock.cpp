#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	int sum =0;
	for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];
	int l=0,r=n-1;
	if(sum%360==0){
		cout<<"YES\n";
		return;
	}
	sum=0;
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		if(sum>=a[i])
		sum-=a[i];
		else
		sum+=a[i];
	//	cout<<sum<<" ";
	}
	if(sum==0)cout<<"YES\n";
	else
	cout<<"NO\n";
	
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}