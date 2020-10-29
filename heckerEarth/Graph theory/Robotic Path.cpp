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
vector<vector<int> > mat(55,vector<int>(55));
int n,m;
int isvalid(int x,int y){
	if(x<0 || x>=n ||y<0 || y>=m )return 0;
	if(mat[x][y]==1)return 0;
	return 1;

}
string bfs(int sx,int sy,int fx,int fy){
	queue< pair<int,int> > q;
	vector<vector<int> > vis(55,vector<int> (55));
	vector< vector<string> > path(55,vector<string> (55));

	q.push({sx,sy});
	vis[sx][sy]=1;
	path[sx][sy]="";
	while(!q.empty()){
		pair<int,int> p=q.front();
		int x=p.F,y=p.S;
		q.pop();
		if(x==fx && y==fy){
			return path[x][y];
		}
		if(isvalid(x+1,y) && !vis[x+1][y]){
			vis[x+1][y]=1;
			q.push({x+1,y});
			path[x+1][y]=path[x][y];
			path[x+1][y]+='D';
		}
		if(isvalid(x,y-1) && !vis[x][y-1]){
			vis[x][y-1]=1;
			q.push({x,y-1});
			path[x][y-1]=path[x][y];
			path[x][y-1]+='L';
		}
		if(isvalid(x,y+1) && !vis[x][y+1]){
			vis[x][y+1]=1;
			q.push({x,y+1});
			path[x][y+1]=path[x][y];
			path[x][y+1]+='R';
		}
		if(isvalid(x-1,y) && !vis[x-1][y]){
			vis[x-1][y]=1;
			q.push({x-1,y});
			path[x-1][y]=path[x][y];
			path[x-1][y]+='U';
		}
		
	}
	// cout<<1<<" "<<path[fx][fy]<<'\n';
	return "Impossible";

}
void solve()
{
	cin>>n>>m;
	f(i,0,n-1){
		f(j,0,m-1){
			char c;cin>>c;
			if(c=='.')mat[i][j]=0;
			else
				mat[i][j]=1;
		}
	}
	int q;cin>>q;
	while(q--){
		int sx,sy,fx,fy;
		cin>>sx>>sy>>fx>>fy;
		--sx,--sy,--fx,--fy;
		cout<<bfs(sx,sy,fx,fy)<<'\n';

	}
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}