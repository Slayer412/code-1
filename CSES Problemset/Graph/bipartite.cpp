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
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N=100005;
vector<int> par(N+5);
vector<int> vis(N);
int root(int a){	
	while(par[a]!=a){
		a=par[a];
	}
	return a;
}
void join(int a,int b){
	int root_a=root(a);
	int root_b=root(b);
	par[root_a]=root_b;
}
void intialise(){
	for(int i=0;i<=N;i++){
		par[i]=i;
	}
}
int check(int a,int b){
	return root(a)==root(b);
}

void solve()
{
	
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}