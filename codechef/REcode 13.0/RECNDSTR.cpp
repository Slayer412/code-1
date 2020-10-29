#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	if(s.length()<=2)
	cout<<"YES\n";
	else
	{	string a="",b="";
		for(int i=1;i<(int)s.length();i++)
		a=a+s[i];
		a=a+s[0];
		for(int i=0;i<(int)s.length()-1;i++)
		b+=s[i];
		b=s[s.length()-1]+b;
		if(a==b)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}