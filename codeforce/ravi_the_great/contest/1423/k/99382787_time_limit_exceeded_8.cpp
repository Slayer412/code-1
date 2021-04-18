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
vector<int> prime(N,1),prime_cnt(N,0);
void sieve(){
	prime[0]=prime[1]=0;
	for(int i=2;i*i<=N-2;++i){
		if(prime[i])
		for(int j=i*2;j<=N;j+=i){
			prime[j]=0;
		}
	}
	f(i,2,N-3){
		prime_cnt[i]=prime_cnt[i-1]+prime[i];
	}
}

void solve()
{
	int n;cin>>n;
	cout<<(prime_cnt[n]-prime_cnt[sqrt(n)]+1)<<endl;
}
int main()
{	Fast;
	sieve();
	int t;cin>>t;
	while(t--)
	solve();
}