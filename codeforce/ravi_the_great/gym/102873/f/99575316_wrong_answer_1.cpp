#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;


void solve()
{
	int n;cin>>n;
	int total_2X2=(n/2)*(n/2);
	int alice_can=total_2X2/2;
	int rem=n*n-alice_can*4;
	if(alice_can*4 > rem){
		cout<<"Alice\n";
	}
	else if(alice_can*4 < rem)
	cout<<"Bob\n";
	else
	cout<<"Draw\n";
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}