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
	int n;cin>>n;
	char mat[n][n];
	f(i,0,n-1){
		f(j,0,n-1)
			cin>>mat[i][j];
	}
//	cout<<mat[n-1][n-2]<<'\n';
	vector< pair<int,int> > ans;
	if(mat[0][1]==mat[1][0]){
		if(mat[n-1][n-2]==mat[0][1]){
			ans.pb({n,n-1});
		}
		if(mat[n-2][n-1]==mat[0][1]){
			ans.pb({n-1,n});
		}
	}
	else{
		if(mat[n-1][n-2]==mat[n-2][n-1]){
			if(mat[n-1][n-2]==mat[0][1])
				ans.pb({1,2});
			else
				ans.pb({2,1});
		}
		else{
			if(mat[0][1]!=mat[n-1][n-2]){
				ans.pb({1,2});
				ans.pb({n,n-1});
			}
			else{
				ans.pb({2,1});
				ans.pb({n-1,n-2});
			}
		}
	}
	cout<<ans.size()<<'\n';
	for(auto it:ans)cout<<it.F<<' '<<it.S<<"\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}