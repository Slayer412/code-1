#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	string s;cin>>s;
	string a="",b="";
	int f=1;
	for(int i=0;i<n;i++){
	
		if(s[i]=='0')
		{
			a+='0';
			b+='0';
			
		}
		else if(s[i]=='1'){
			if(f)
			a+='1',b+='0',f=0;
			else
			b+='1',a+='0';
		}
		else
		{	if(f)
			a+='1',b+='1';
			else
			b+='2',a+='0';
		}
		
	}
	cout<<a<<'\n'<<b<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

