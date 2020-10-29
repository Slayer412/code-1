#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s,p;
	cin>>s>>p;
	int n=s.length();
	int m=p.length();
	map<char,int> m1,m2;
	for(int i=0;i<n;i++)
	m1[s[i]]++;
	for(int i=0;i<m;i++)
	m2[p[i]]++;
	string ans="";
	int l[n+1][m+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;i<m;j++)
		{
			if(i==0 || j==0)
				l[i][j]=0;
			else if(s[i]==p[j])
		}
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
		solve();
}