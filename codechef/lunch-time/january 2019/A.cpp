#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	string s;cin>>s;
	int cnt=0;
	for(int i=0;i<n-1;i++)
	{	
		if(s[i]=='0' && s[i+1]=='0' && i==0)
		{
			s[i]='1';
			++cnt;
		}
		else if(i==n-2 && s[i-1]=='0' && s[i]=='0' && s[i+1]=='0')
		{
			s[i]='1';
			++cnt;
		}
		else if(s[i+1]=='0' && s[i]=='0' && s[i-1]=='0')
		{
			s[i]='1';
			++cnt;
		}
	}
	if(s[n-2]=='0' && s[n-1]=='0')
	++cnt;

	cout<<cnt<<"\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

