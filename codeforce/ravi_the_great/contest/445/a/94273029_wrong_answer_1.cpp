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
const int N=105;
char mat[N][N];
vector<string > ans(N);
vector<vector<int> > vis(N,vector<int> (N,false));
int n,m;
bool isvalid(int i,int j){
	if(i<0 || i>=n || j<0 || j>=m)return 0;
	if(vis[i][j])return false;
	if(mat[i][j]!='.')return false;
	return 1;
}
void solve()
{
	cin>>n>>m;
	int x,y,f=0;
	f(i,0,n-1){
		f(j,0,m-1){
			cin>>mat[i][j];
			if(f && mat[i][j]=='.')
				mat[i][j]='W',f=0;
			else if(mat[i][j]=='.')
				mat[i][j]='B',f=1;
			cout<<mat[i][j];
		}
		cout<<'\n';
	}
	
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}