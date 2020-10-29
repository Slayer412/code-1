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
{	int n;cin>>n;
	vi a(n+1),arr(n+1);
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		arr[i]=x;
		a[x]=i;
	}
	for(int i=n;i>=1;i--){
		if(a[i]!=1 && a[i]!=n){
			if(arr[a[i]]>arr[a[i]-1] && arr[a[i]]>arr[a[i]+1]){
			cout<<"YES\n";
			cout<<a[i]-1<<" "<<a[i]<<" "<<a[i]+1<<'\n';
			return;
			}
		}
	}
	cout<<"NO\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}