#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,k;cin>>n>>k;
	vi a(n);
	int minus=0;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end());
	for(int i=0;i<n && k;++i){
		if(a[i]-minus==0)
		continue;
		int x=a[i]-minus;
		cout<<x<<'\n';
		minus+=x;
		k--;
	}
	while(k--)cout<<0<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}