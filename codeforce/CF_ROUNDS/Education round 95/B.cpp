	#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int cnt=0;
	int n=s.length();
	int one=0,zero=0;
	int p1[n+1]={0},s1[n+1]={0};
	int p0[n+1]={0},s0[n+1]={0};
	for(int i=0;i<n;i++)
	{
		p1[i+1]=p1[i]+(s[i]=='1');
		p0[i+1]=p0[i]+(s[i]=='0');
	}
	for(int i=n-1;i>=0;i--){
		s1[i]=s1[i+1]+(s[i]=='1');
		s0[i]=s0[i+1]+(s[i]=='0');
	}
	int ans=INT_MAX;
	for(int i=1;i<=n;i++){
		ans=min(ans,p1[i]+s0[i]);
		ans=min(ans,p0[i]+s1[i]);
	}
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}