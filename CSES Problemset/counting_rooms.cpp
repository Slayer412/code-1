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
int vis[1001][1001];
char arr[1001][1001];
int cc=0;
int n,m;
int isvalid(int x,int y){
	if(x>n || y>m || x<1 || y<1 )return 0;
	if(vis[x][y]==1 || arr[x][y]=='#')return 0;
	return 1;
}
void dfs(int x,int y){
	vis[x][y]=1;
	if(isvalid(x+1,y))
		dfs(x+1,y);
	if(isvalid(x,y+1))
		dfs(x,y+1);
	if(isvalid(x-1,y))
		dfs(x-1,y);
	if(isvalid(x,y-1))
		dfs(x,y-1);
}
void solve()
{
	cin>>n>>m;
	f(i,1,n){
		f(j,1,m){
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		f(j,1,m){
			if(arr[i][j]=='.' && vis[i][j]==0){
				dfs(i,j);
				++cc;
			}
		}
	}
	cout<<cc;
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}