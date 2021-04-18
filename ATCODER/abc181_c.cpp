// Problem: C - Collinearity
// Contest: AtCoder - AtCoder Beginner Contest 181
// URL: https://atcoder.jp/contests/abc181/tasks/abc181_c
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
	vector  < pair<int,int> > a;
	f(i,0,n-1){
		int x,y;cin>>x>>y;
		a.pb({x,y});
	}
	f(i,0,n-3){
		f(j,i+1,n-2){
			f(k,j+1,n-1){
				int x1=a[i].F,y1=a[i].S;
				int x2=a[j].F,y2=a[j].S;
				int x3=a[k].F,y3=a[k].S;
				if(abs(x1-x2)==0 && abs(x3-x1)==0){
					cout<<"Yes\n";
					
					return;
				}
				double m2=((double)y1-y2)/((double)x1-x2);
				double m1=((double)y3-y1)/((double)x3-x1);
				
				if(m2==m1){
				//	cout<<i<<" "<<j<<" "<<k<<endl;
					cout<<"Yes\n";
					return;
				}
				
			}
		}
	}
	
	cout<<"No\n";
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}