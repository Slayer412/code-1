// Problem: C. Unique Number
// Contest: Codeforces - Codeforces Round #690 (Div. 3)
// URL: https://codeforces.com/contest/1462/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

//code by: Ravi Khatri @ravi_the_great
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
	string ans="";
	int dig=9;
	if(n<10){
		cout<<n<<endl;
		return;
	}
	if(n>45){
		cout<<"-1\n";
		return;
	}
	while(n>0 ){
		if(n<dig){
			ans=(char('0'+ n))+ans;
			n=0;
			break;
			
		}
		ans=(char('0'+dig))+ans;
		n-=dig;
		dig-=1;
		if(dig==-1 || n==0){
			break;
		}
	}
	if(n>0){
		cout<<-1<<endl;
		return;
	}
	cout<<ans<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}