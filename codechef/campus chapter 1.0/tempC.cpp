#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	string s;
	int d;
	cin>>s;
	cin>>d;
	int x;
	while(d--)
	{
		cin>>x;
		for(int i=1;i<n-1;i++)
		{
			if(s[i]=='1')
			{	if((i-1)!=x)
				s[i-1]='1';
				if((i+1)!=x)
				s[i+1]='1';
			}
		}
	}
	cout<<s;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

