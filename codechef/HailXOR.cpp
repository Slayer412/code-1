// Problem: Hail XOR
// Contest: CodeChef - December Challenge 2020 Division 2
// URL: https://www.codechef.com/DEC20B/problems/HXOR
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
	int n,x;cin>>n>>x;
	vector< bitset<32> > binary(n);
	vector < int > a(n);
	int total_bits=0;
	f(i,0,n-1){
		cin>>a[i];
		bitset<32> b(a[i]);
		binary[i]=b;
	}
	int last=n-1;
	int f=1;
	vector< int > vis(32);
	
	f(i,0,n-2){
		fr(j,31,0){
			if(binary[i][j]){
				
				if(vis[j]){
					binary[i][j]=0;
					binary[last][j]=1-binary[last][j];
					vis[j]=0;
				}
				else if(x){
					binary[i][j]=0;
					binary[last][j]=1-binary[last][j];
					vis[j]=1;
					--x;
				}
				
			}
		}
	}
	
	//cout<<x<<endl;
	if(x%2){
		if(n==2){
		binary[n-2][0]=1-binary[n-2][0];
		binary[n-1][0]=1-binary[n-1][0];
		}
	}
	f(i,0,n-1){
		a[i]=(int)binary[i].to_ullong();
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}