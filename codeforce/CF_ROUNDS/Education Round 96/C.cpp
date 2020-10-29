#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	cout<<2<<'\n';
	vi a(n+1);f(i,1,n)a[i]=i;
	int i=n,j=n-1;
	while(j>=1){
		cout<<a[i]<<" "<<a[j]<<'\n';
		a[j]=(a[i]+a[j]+1)/2;
		i=j;
		--j;
	}

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}