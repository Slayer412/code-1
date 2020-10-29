#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{	int n;cin>>n;
	set< string > arr;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		arr.insert(s);
	}
	for(string s:arr)
	cout<<s<<'\n';
	
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

