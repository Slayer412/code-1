#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vi pos(n+1);
	int ele;
	for(int i=1;i<=n;i++){
		cin>>ele;
		pos[ele]=i;
	}
	int l=n+1;
	int r=1;
	string ans="";
	for(int i=1;i<=n;i++){
		l=min(l,pos[i]);
		r=max(r,pos[i]);
		if(r-l+1==i)
		ans+="1";
		else
		ans+="0";
	}
	cout<<ans<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}