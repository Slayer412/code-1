#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int flag=1;
	for(int i=1;i<s.length();i++)
	if(s[i]!=s[i-1])
	flag=0;
	if(flag)
	cout<<s<<'\n';
	else
	{	string ans="";
		for(int i=0;i<s.length();i++)
		ans=ans+"01";
		cout<<ans<<endl;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}