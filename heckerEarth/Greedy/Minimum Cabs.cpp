#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{	int n;cin>>n;
	vector< pair< pair<int,int>,pair<int,int> > > t;
	for(int i =0;i<n;i++){
		int h1,m1,h2,m2;
		cin>>h1>>m1>>h2>>m2;
		t.pb({{h1,m1},{-1,i}});// in
		t.pb({{h2,m2},{1,i}});//out
	}
	vi cabs,ans(n+1);
	int mx_cabs=0,occupied=0,in_or_out=0,ind;
	sort(t.begin(),t.end());
	for(auto it:t){
		in_or_out=it.S.F;
		ind=it.S.S;
		if(in_or_out==1){
			cabs.push_back(ans[ind]);
		}
		else if(occupied==cabs.size()){
			++mx_cabs;
			ans[ind]=mx_cabs;
		}
		else
			ans[ind]=cabs[occupied++];
	}
	cout<<mx_cabs<<'\n';
}
int main()
{	Fast;
	int t=1;
//	cin>>t;
	while(t--)
	solve();
}