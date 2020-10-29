#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	string s;
	cin>>s;
	
	int cnt_a=0,cnt_b=0;
	vi pref_a(n+1),pref_b(n+1);
	int ans=INT_MAX;
	pref_a[0]=(s[0]=='A');
	pref_b[0]=(s[0]=='B');
	for(int  i=0;i<n;i++){
		if(s[i]=='A')cnt_a++;
		if(i!=0)pref_a[i]+=pref_a[i-1]+(s[i]=='A');
		if(s[i]=='B')cnt_b++;
		if(i!=0)
		pref_b[i]+=pref_b[i-1]+(s[i]=='B');
	}
	for(int i=0;i<n-1;i++){
		ans=min(ans,pref_b[i]+(pref_a[n-1]-pref_a[i+1]));
	}
	if(n==1)
	cout<<0<<'\n';
	else
	{
	ans=min(ans,min(cnt_a,cnt_b));
	cout<<ans<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}