#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
void solve()
{
	cin>>n>>m;
	string s[m];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>s[i][j];
	int l=0,f=1;
	for(int i=0;i<n;i++)
	{	for(int j=0;j<m;j++)
		{
			if(s[i][j]=='.')
			++l;
			else
			{	
				if(l==1)
				{
					f=0;
					break;
				}
				l=0;
			}
		}
			if(!f)
			break;
			l=0;
	}
	if(f)
	cout<<"YES\n";
	else
	cout<<"No\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

