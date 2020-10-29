#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	char s[9][9];
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
			cin>>s[i][j];
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(s[i][j]=='9')
			cout<<'8';
			else
			cout<<s[i][j];
		}
		cout<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

