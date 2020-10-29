#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int len=s.length();
	auto i=s.end()-1;
	if(s[0]=='-')
	{
		if((s[len-1]-'0')>=(s[len-2]-'0'))
		s.erase(i);
		else
		s.erase(--i);
		if(s[0]=='-' && s[1]=='0')
		cout<<0;
		else
		cout<<s;	
	}
	else
	cout<<s;
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

