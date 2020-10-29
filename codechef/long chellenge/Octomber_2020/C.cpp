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
	if(n && (!(n & n-1)) ){
		cout<<-1<<'\n';
		return;
	}
	if(n==1){
		cout<<-1<<'\n';
		return;
	}
	vi a(n+1);
	a[1]=2,a[2]=3,a[3]=1;
	for(int i=4;i<=n;){
		if(i && !(i & (i-1))){
			a[i]=i+1;
			if(i==n)
				break;
			a[i+1]=i;
			// cout<<(a[i]&a[i-1])<<" ";
			i+=2;
		}
		else{
			a[i]=i;
			// cout<<(a[i]&a[i-1])<<" ";
			++i;
		}

		
	}
	f(i,1,n)cout<<a[i]<<" ";
	cout<<'\n';
	f(i,1,n-1)cout<<(a[i]&a[i+1])<<" ";
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}