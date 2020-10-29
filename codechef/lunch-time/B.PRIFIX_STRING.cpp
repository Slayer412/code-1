#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{	string s;
	int k,x;
	cin>>s>>k>>x;
	int del=k;
	int arr[27]={0};
	int mx=0;
	string ans="";
	for(int i=0;i<s.length();++i)
	{	
		if(arr[s[i]-'a']<x){
		ans=ans+s[i];
		++arr[s[i]-'a'];
		//cout<<ans<<"\n";
		}
		else if(k)
		--k;
		else
		break;
	}
	cout<<ans.length()<<"\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

