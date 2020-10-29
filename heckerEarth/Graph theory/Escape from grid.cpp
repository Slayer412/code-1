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
const int N=105;
vector< vector<int> > mat(N,std::vector<int>(N));
vector< vector<int> > vis(N,std::vector<int> (N));
vector< vector<int> > dist(N,vector<int> (N,INT_MAX));
int n,m;
bool isvalid(int i,int j){
	if(i<0 || i>=n || j<0 || j>=m )return 0;
	if(vis[i][j])return 0;
	if(mat[i][j]==0)return 1;
	return 0;
}
int bfs(int i,int j){
	vis[i][j]=1;
	queue < pair<int,int> > q;
	q.push({i,j});
	dist[i][j]=0;
	while(!q.empty()){
		int x=q.front().F;
		int y=q.front().S;
		q.pop();
		if(isvalid(x+1,y)){
			dist[x+1][y]=dist[x][y]+1;
			vis[x+1][y]=1;
			q.push({x+1,y});
		}
		if(isvalid(x-1,y)){
			dist[x-1][y]=dist[x][y]+1;
			vis[x-1][y]=1;
			q.push({x-1,y});
		}
		if(isvalid(x,y+1)){
			dist[x][y+1]=dist[x][y]+1;
			vis[x][y+1]=1;
			q.push({x,y+1});
		}
		if(isvalid(x,y-1)){
			dist[x][y-1]=dist[x][y]+1;
			vis[x][y-1]=1;
			q.push({x,y-1});
		}
	}
	int ans=INT_MAX;
	for(int i=0;i<m;i++)ans=min(ans,dist[0][i]),ans=min(ans,dist[n-1][i]);
	for(int i=0;j<n;j++)ans=min(ans,dist[i][0]),ans=min(ans,dist[i][n-1]);
	

	if(ans==INT_MAX)return -1;
	return ans;

}
void solve()
{	int x,y;
	cin>>n>>m;
	f(i,0,n-1){
		f(j,0,m-1){
			cin>>mat[i][j];
			if(mat[i][j]==2)x=i,y=j;
		}
	}
	cout<<bfs(x,y);

}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}