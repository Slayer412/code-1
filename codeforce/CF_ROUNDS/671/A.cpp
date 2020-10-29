#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	string s;cin>>s;
	int odd=0,even=0;
	int evencan=0,oddcan=0;
	f(i,0,n-1){
		if(i%2){
			if((s[i]-'0')%2==0)evencan=1,++even;
		}
		else{
			if((s[i]-'0')%2)oddcan=1,++odd;
		}
	}
	if(n==1){
		if((s[0]-'0')%2)cout<<1<<'\n';
		else
			cout<<2<<'\n';
	}
	else if(evencan && !oddcan)cout<<2<<'\n';
	else if(oddcan && !evencan)cout<<1<<'\n';
	else if(!oddcan && !evencan){
			if(n%2)
			cout<<2<<'\n';
			else
			cout<<1<<'\n';
	}
	else if(oddcan && evencan){
		if(n%2){
			cout<<1<<'\n';
		}
		else{
			cout<<2<<'\n';
		}
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}