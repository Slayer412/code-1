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
	string s;cin>>s;
	int f=1;
	for(int i=1;i<n;i++){
		if(s[i]<s[i-1])f=0;
	}
	if(f){
		cout<<s<<'\n';
		return;
	}
	string ans="";
	for(int i=0;i<n;i++){
		if(s[i]=='1')break;
		ans+='0';
	}
	ans.push_back('0');
	for(int i=n-1;i>=0;--i){
		if(s[i]=='0')break;
		ans+='1';
	}
	cout<<ans<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}