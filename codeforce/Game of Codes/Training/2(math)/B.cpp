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
void solve()
{
	int n,m;cin>>n>>m;
	ll mat[n][m];
	f(i,0,n-1){
		f(j,0,m-1){
			cin>>mat[i][j];
		}
	}
	pair<int,int> p1={0,0};
	pair<int,int> p2={0,m-1};
	pair<int,int> p3={n-1,0};
	pair<int,int> p4={n-1,m-1};
	ll total=0;
	while(p1.S < p2.S && p3.S<p4.S){

		if(p1.F>=p3.F){
			int f=++p1.S;
			int s=--p2.S;
			int t=++p3.S;
			int four=--p4.S;
			if(f>=s)break;
			if(t>=four)break;
			p1={0,f};
			p2={0,s};
			p3={n-1,t};
			p4={n-1,four};
		}
		vll temp;
		temp.pb(mat[p1.F][p1.S]);
		temp.pb(mat[p2.F][p2.S]);
		temp.pb(mat[p3.F][p3.S]);
		temp.pb(mat[p4.F][p4.S]);
		sort(all(temp));
		ll val=temp[1];
		ll steps=abs(mat[p1.F][p1.S]-val)+abs(mat[p2.F][p2.S]-val)+abs(mat[p3.F][p3.S]-val)+abs(mat[p4.F][p4.S]-val);
		total+=steps;
		p1.F++;
		p2.F++;
		p3.F--;
		p4.F--;
	}
	if(n%2){
		int row=n/2;
		int l=0,r=m-1;
		while(l<r){
			ll sum=mat[row][l]+mat[row][r];
			ll val=sum/2LL;
			total+=abs(val-mat[row][l])+abs(val-mat[row][r]);
			++l,--r;
		}
	}
	if(m%2){
		int col=m/2;
		int l=0,r=n-1;
		while(l<r){
			ll sum=mat[l][col]+mat[r][col];
			ll val=sum/2LL;
			total+=abs(val-mat[l][col])+abs(val-mat[r][col]);
			++l,--r;
		}
	}
	cout<<total<<"\n";

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}