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
	vll a(n);
	f(i,0,n-1){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	ll sum=a[n-2]+a[n-3];
	f(i,2,n-1){
		if(a[i] < (ll)(a[i-1]+a[i-2])){
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}