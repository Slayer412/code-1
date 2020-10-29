#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int n;cin>>n;
	string s,s1;
	cin>>s;
	cin>>s1;
	int ans=0;
	for(int i=0;i<n-1;)
	{
		if(s[i]!=s1[i] && s1[i]!='N')
		i+=2;
		else if(s1[i]=='N')
		++i;
		else if(s[i]==s1[i])
		++ans,++i;
	}
	if(s[n-1]==s1[n-1])
	cout<<++ans<<endl;
	else
	cout<<ans<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

