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
	vi a(6);
	f(i,0,5)cin>>a[i];
	int n; cin>>n;
	vi b(n);
	f(i,0,n-1)cin>>b[i];
	int mat[n][6];
	set<int> ids;
	f(i,0,n-1){
		f(j,0,5){

			mat[i][j]=b[i]-a[j];
			if(mat[i][j]<0)
				mat[i][j]=INT_MAX;
			ids.insert(mat[i][j]);
		}
		sort(mat[i],mat[i]+6);
	}
	set< pair<int,pair<int,int> > > vals;
	for(int i=0;i<n;i++){
		vals.insert({mat[i][0],{i,0}});
	}
	int f=0;
	int ans=INT_MAX;
	for(auto it:ids){
		while((vals.begin())->F < it ){
			auto t=*vals.begin();
			vals.erase(t);
			 if(t.S.S==5){
			 	f=1;
			 	break;
			 }
			 vals.insert({mat[t.S.F][t.S.S+1],{t.S.F,t.S.S+1}});	
		}
		if(f)break;
		ans=min(ans,abs((*vals.begin()).F - it));
		// cout<<ans<<" "<<"#it"<<" "<<it<<"\n" ; 
	}
	cout<<ans<<endl;
	

}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}