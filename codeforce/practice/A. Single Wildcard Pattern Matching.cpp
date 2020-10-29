#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	string a,b;cin>>a>>b;
	if(n>m+1){
		cout<<"NO\n";
		return;
	}
	int l=0,r=n-1;
	while(a[l]!='*' && l<n){
		if(a[l]==b[l])++l;
		else{
			cout<<"NO\n";
			return;
		}
	}
	int r1=m-1;
	while(a[r]!='*' && r>=l && r1>=l){
		if(a[r]==b[r1] && r>=l && r1>=l){
			--r;
			--r1;
		}
		else{
			cout<<"NO\n";
			return;
		}
	}
	if(a[r]!='*' && a!=b){
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}