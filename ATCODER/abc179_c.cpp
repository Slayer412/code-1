// Problem: C - A x B + C
// Contest: AtCoder - AtCoder Beginner Contest 179
// URL: https://atcoder.jp/contests/abc179/tasks/abc179_c
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
const int N=1e6+5;
vector <int> prime(N,1);
void fun(){
	prime[0]=prime[1]=0;
	for(int i=2;i*i<=N;++i){
		if(prime[i]){
			for(int j=i*2;j<=N;j+=i)prime[j]=0;
		}
	}
}

void solve()
{
	int n;cin>>n;
	int c=1;
	int cnt=0;
	while(c<n){
		int x=n-c;
		
		if(prime[x]){
			++c;
			cnt+=2;
			continue;
		}
		ll pluse=1;
		for(int i=2;i*i<=x;++i){
			if(x%i==0){
				int cnt1=0;
				while(x%i==0){
					x/=i;
					cnt1++;
					
				}
				if(cnt1){
					pluse*=(cnt1+1);
				}
				
			}
			
		}
		if(x>1){
			pluse*=(2);
		}
		cnt+=pluse;
		++c;
		
	}
	cout<<cnt<<'\n';
}
int main()
{	fun();
	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}