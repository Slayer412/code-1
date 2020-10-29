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
const int Nax=200005;
const int N=5005;
vector<int> edges[N];
vector< vector<int> > weight(N,vector<int> (N));
int d,n;
void solve()
{
	cin>>n>>d;
	f(i,1,n){
		
		f(j,1,d){
			int x;cin>>x;
			edges[i].push_back(x);
		}
	}
	for(int i=1;i<n;i++){
		ll mx=-1;
		f(j,i+1,n){
			int dist=0;
			f(k,0,d-1){
				dist+=abs(edges[i][k]-edges[j][k]);
			}
			weight[i][j]=dist;
			weight[j][i]=dist;
		}
	}
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}