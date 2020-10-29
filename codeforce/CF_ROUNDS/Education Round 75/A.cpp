#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	string s;cin>>s;
	if(s.length()==1){
	cout<<s[0]<<'\n';
	return;
	}
	//string ans="";
	string s1=s;
	int n=s.length();
	for(int i=1;i<s.length();i++){
		if(s[i]==s[i-1] && s[i]!='0')
		s[i]='0',s[i-1]='0',i=1;
	}
	//string ans="";
	set<char> res;
	for(char c:s)
		if(c!='0')
			res.insert(c);
	for(auto i:res)
	cout<<i;
	cout<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}