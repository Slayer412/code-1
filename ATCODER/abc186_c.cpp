// Problem: C - Unlucky 7
// Contest: AtCoder - Panasonic Programming Contest (AtCoder Beginner Contest 186)
// URL: https://atcoder.jp/contests/abc186/tasks/abc186_c
// Memory Limit: 1024 MB
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
	int ans=n;
	f(i,1,n){
		int x=i;
		int ok=1;
		while(x>0){
			if(x%10==7){
				ok=0;
				--ans;
				break;
			}
			x/=10;
		}
		if(ok){
			x=i;
			while(x>0){
				if(x%8==7){
					ok=0;
					--ans;
					break;
				}
				x/=8;
			}
		}
		
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}