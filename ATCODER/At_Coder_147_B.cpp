#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	string s;cin>>s;
	int cnt=0;
	for(int i=0,j=s.length()-1;i<=j;i++,j--)
	{	
		if(s[i]!=s[j])
		++cnt;
	}
	cout<<cnt;
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

