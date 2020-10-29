#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	string s;cin>>s;
	int d;cin>>d;
	int dd[d];
	for(int i=0;i<d;i++)
	{
		cin>>dd[i];
		if(i==0)
		for(int j=1;j<dd[i]-1;j++)
		if((s[j]-'0')==1)
		s[j-1]='1',s[j+1]='1';
		else
		{
			for(int j=0;j<dd[i];++j)
			{
				if((s[j]-'0')==1 &&
			}
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

