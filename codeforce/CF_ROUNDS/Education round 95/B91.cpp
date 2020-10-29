#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;i++)
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int n=s.length();
	int ss=count(s.begin(),s.end(),'S');
	int p=count(s.begin(),s.end(),'P');
	int r=count(s.begin(),s.end(),'R');
	if(ss==p && r==ss)
	for(int i=0;i<n;i++){
		if(s[i]=='R')
		cout<<'P';
		else if(s[i]=='S')
		cout<<'R';
		else
		cout<<'S';
	}
	else{
		if(ss>=p && ss>=r){
			f(i,0,n-1)cout<<"R";
		}
		else if(p>=r && p>=ss)
			f(i,0,n-1)cout<<'S';
		else if(r>=p && r>=ss)
		f(i,0,n-1)cout<<"P";
	}
	cout<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

