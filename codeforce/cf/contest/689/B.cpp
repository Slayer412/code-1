// Problem: B. Find the Spruce
// Contest: Codeforces - Codeforces Round #689 (Div. 2, based on Zed Code Competition)
// URL: https://codeforces.com/contest/1461/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
	vector< string > s;
	int n,m;cin>>n>>m;
	int total=0;
	f(i,0,n-1){
		string str;cin>>str;
		str='.'+str;
		s.push_back(str);
	}
	vector < vector <int> > l(n+1,vector<int> (m+1));
	vector < vector <int> > r(n+1,vector<int> (m+1));
	int cnt=0;
	f(i,0,n-1){
		cnt=0;
		f(j,1,m){
			if(s[i][j]=='.'){
				cnt=0;
				continue;
			}
			
			l[i][j]=cnt;
			++cnt;
		}
		cnt=0;
		fr(j,m,1){
			if(s[i][j]=='.'){
				cnt=0;
				continue;
			}
			r[i][j]=cnt;
			++cnt;
		}
	}
	int ans=0;
	f(i,0,n-1){
		f(j,1,m){
			if(s[i][j]=='.')continue;
			++ans;
			for(int h=1;h+i<n;++h){
				if(r[i+h][j]<h || l[i+h][j]<h)break;
				++ans;
			}
		}
	}
	cout<<ans<<endl;
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}