#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n),ans;
	for(int &i:a)cin>>i;
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1])
		ans.push_back(a[i]);
		}
	ans.push_back(a[n-1]);
	cout<<ans.size()<<" ";
	for(int i:ans)cout<<i<<" ";
	cout<<'\n';	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

