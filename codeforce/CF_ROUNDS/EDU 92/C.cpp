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
	string s;cin>>s;
	int n=s.length();
	map<char,int> mp;
	for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
	int res=n+1;
	for(char i='0';i<='9';++i){
		for(char j='0' ;j<='9';++j){
			if(i==j)
			continue;
				int a=0,b=0;
			for(int k=0;k<n;k++){
				if(s[k]==i && b==a)
				++a;
				if(s[k]==j && a==b+1)
				++b;
			//	cout<<a<<" "<<b<<'\n';
			}
			//cout<<'\n';
			//cout<<i<<" "<<a<<"\n";
			//cout<<j<<' '<<b<<'\n';
			int temp=a+b;
			if(temp%2==0){
				res=min(res,n-temp);
			}
			else
				res=min(res,n-temp+1);
			//<<res<<"\n";
		}
	}
	for(char i='0';i<='9';++i){
		res=min(res,n-mp[i]);
	}
	cout<<res<<"\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}