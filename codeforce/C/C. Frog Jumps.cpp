#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{	//int n;cin>>n;
	string s;cin>>s;
	int cnt=0,mx=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='L')
		++cnt,mx=max(mx,cnt);
		else
		cnt=0; 
	}
	cout<<mx+1<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

