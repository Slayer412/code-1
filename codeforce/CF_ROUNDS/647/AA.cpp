#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	ll a,b;
	cin>>a>>b;
	if(a>b){
		int cnt=0;
		while(a%8==0 && a/8>=b){
			a/=8;
			cnt++;
			if(a==b)
			{
				cout<<cnt<<'\n';
				return;
			}
		}
		while(a%4==0 && a/4>=b){
			a/=4;
			cnt++;
			if(a==b)
			{
				cout<<cnt<<'\n';
				return;
			}
		}
		while(a%2==0 && a/2>=b)
		{
			a/=2;
			cnt++;
			if(a==b)
			{
				cout<<cnt<<'\n';
				return;
			}
		}
		if(a==b)
		cout<<cnt<<'\n';
		else
		cout<<"-1\n";
		
	}
	else{
		if(a==b){
			cout<<0<<'\n';
			return;
		}
		int cnt=0;
		while(a*8<=b){
			a*=8;
			cnt++;
			if(a==b)
			{
				cout<<cnt<<'\n';
				return;
			}
		}
		while(a*4<=b){
			a*=4;
			cnt++;
			if(a==b)
			{
				cout<<cnt<<'\n';
				return;
			}
		}
		while( a*2<=b)
		{
			a*=2;
			cnt++;
			if(a==b)
			{
				cout<<cnt<<'\n';
				return;
			}
		}
		if(a==b)
		cout<<cnt<<'\n';
		else
		cout<<"-1\n";
		
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}