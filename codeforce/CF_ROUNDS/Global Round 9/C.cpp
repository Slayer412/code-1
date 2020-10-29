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
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0]<a[n-1]){
		cout<<"YES\n";
	}
	else
	cout<<"NO\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}