#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n,slen,ele;
	cin>>n>>slen>>ele;
	char c='a',ch='a';
	string ans="";
	int tb=ele;
	string subs="";
	while(tb--)
	{
		subs+=c++;
	}
	int itr=slen-ele;
	if(itr>0)
	while(itr--)
	subs+=ch;
	if(slen==1)
	{
		while(n--)
		cout<<c++;
		cout<<'\n';
	}
	else
	{
	for(int i=0,j=0;i<n;i++)
	{	if(j==subs.length())
		j=0;
		ans+=subs[j++];
	}
	cout<<ans<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

