#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	string s;cin>>s;
	string str= "abacaba";
	int j=0,f=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		int k=1;
		if(s[i]=='a')
		for(int j=i+1;j<n;j++){
			if(str[k]==s[j] && k<str.size())++k;
			else
			break;
		}
		//cout<<"I "<<i<<" K "<<k<<'\n';
		if(k==str.size())++cnt;
	}
	if(cnt==1){
		for(int i=0;i<n;i++){
			if(s[i]=='?')s[i]='z';
		}
		cout<<"YES\n";
		cout<<s<<'\n';
		return;
	}
	if(cnt>1){
		cout<<"NO\n";
		return;
	}
	string t=s;
	for(int i=0;i<n;i++){
		t=s;
		if(t[i]=='a' || t[i]=='?'){
			t[i]='a';
			int k=1;
			for(int j=i+1;j<n;++j){
				if(t[j]==str[k] && k<str.size())++k;
				else if(t[j]=='?' && k<str.size())t[j]=str[k],++k;
				else
				break;
				if(k==str.size())break;
			}
			if(k==str.size()){
				for(int i=0;i<n;i++){
					if(t[i]=='?')
					t[i]='z';
				}
				break;
			}
			
		}
		
	}
	//cout<<t<<'\n';
	s=t;
	cnt=0;
	for(int i=0;i<n;i++){
		int k=1;
		if(s[i]=='a')
		for(int j=i+1;j<n;j++){
			if(str[k]==s[j] && k<str.size())++k;
			else
			break;
		}
		if(k==str.size())++cnt;
	}
//	cout<<cnt<<'\n';
	if(cnt==1){
		cout<<"YES\n";
		cout<<s<<'\n';
	}
	else
	cout<<"NO\n";
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}