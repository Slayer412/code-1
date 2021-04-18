// Problem: C. Random Events
// Contest: Codeforces - Codeforces Round #689 (Div. 2, based on Zed Code Competition)
// URL: https://codeforces.com/contest/1461/problem/C
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
{	cout<<setprecision(9);
	cout<<fixed;
	int n,q;cin>>n>>q;
	vi a(n+1);
	f(i,1,n){
		cin>>a[i];
	}
	int cnt=0;
	fr(i,n,1){
		if(a[i]!=i)break;
		++cnt;
	}
	
	int req=n-cnt;
	
	vector < double> valid;
	f(i,1,q){
		int r;
		double p;
		cin>>r>>p;
		if(r>=req){
			valid.push_back(p);
		}
	}
	if(req==0){
		cout<<"1.0"<<endl;
		return;
	}
	int m=sz(valid);
	vector< vector< double > > dp(m+1,vector< double > (2));
	
	dp[0][0]=1;
	f(i,1,m){
		dp[i][0]=(dp[i-1][0])*(1.0-valid[i-1]);
		dp[i][1]=dp[i-1][0]*(valid[i-1])+dp[i-1][1];
	}
	cout<<dp[m][1]<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}