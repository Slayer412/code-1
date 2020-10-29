#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	multiset<int> s;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		s.insert(x);
	}
	vi a(s.begin(),s.end());
	//for(int i:a)cout<<i<<'\n';
	if(a[n-1]<=n){
		cout<<n+1<<'\n';
		return;
	}
	vi granni(n);
	for(int i=0;i<n;i++)
	granni[i]=i+2;
	int ans=1;
	for(int i=0;i<n;i++){
		if(a[i]<granni[i])
		ans=granni[i];
	}
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}