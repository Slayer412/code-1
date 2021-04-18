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
void dfs(int i,int j,char par='B'){
	vis[i][j]=1;
	if(isvalid(i+1,j)){
		if(par=='B'){
			mat[i+1][j]='W';
			dfs(i+1,j,'W');
		}
		else{
			mat[i+1][j]='B';
			dfs(i+1,j,'B');
		}
	}
	if(isvalid(i-1,j)){
		if(par=='B'){
			mat[i-1][j]='W';
			dfs(i-1,j,'W');
		}
		else{
			mat[i-1][j]='B';
			dfs(i-1,j,'B');
		}
	}
	if(isvalid(i,j+1)){
		if(par=='B'){
			mat[i][j+1]='W';
			dfs(i,j+1,'W');
		}
		else{
			mat[i][j+1]='B';
			dfs(i,j+1,'B');
		}
	}
	if(isvalid(i,j-1)){
		if(par=='B'){
			mat[i][j-1]='W';
			dfs(i,j-1,'W');
		}
		else{
			mat[i][j-1]='B';
			dfs(i,j-1,'B');
		}
	}
}
void solve()
{
	cin>>n>>m;
	int x,y,flG=0;
	f(i,0,n-1){
		f(j,0,m-1){
			cin>>mat[i][j];
			if(mat[i][j]=='.' && !flG)x=i,y=j,flG=1;
		}
	}
	mat[x][y]='B';
	if(flG){
		f(i,0,n-1){
			f(j,0,m-1){
				if(!vis[i][j]){
					dfs(i,j);
				}
			}
		}
	}
	f(i,0,n-1){
		f(j,0,m-1)
		cout<<mat[i][j];
	cout<<'\n';
	}
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}