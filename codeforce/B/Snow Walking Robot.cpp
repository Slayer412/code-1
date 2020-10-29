#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	string s;
	cin>>s;
	map<char,int> cnt;
	for(char c: s){
		cnt[c]++;	
	}
	
	int a=min(cnt['U'],cnt['D']);
	int b=min(cnt['R'],cnt['L']);
	if(min(a,b)==0){
		if(a==0){
			b=min(1,b);
			cout<<2*b<<'\n'<<string(b,'L') + string(b,'R')<<'\n';
		}
		else if(b==0){
			a=min(1,a);
			cout<<a*2<<'\n'<<string(a,'U')+string(a,'D')<<'\n';
		}
	}
	else
	{
		string ans="";
		ans+=string(b,'L');
		ans+=string(a,'U');
		ans+=string(b,'R');
		ans+=string(a,'D');
		
		cout<<ans.size()<<'\n'<<ans<<'\n';
		
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

