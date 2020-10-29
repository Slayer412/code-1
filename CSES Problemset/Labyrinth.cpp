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
string path="";
vector< vector<char> > mat(1001,vector<char> (1001));
int vis[1001][1001];
int n,m;
pair<int,int> start;
map< pair<int,int> , pair<pair<int,int>,char > >parent;
int dr[4]={1,-1,0,0};
int dc[4]={0,0,-1,1};
bool isvalid(int x, int y){
//	cout<<x<<" "<<y<<'\n';
	if(x<0 || y<0 ||x>=n || y>=m || mat[x][y]=='#')return false;
	if(vis[x][y]==1)return false;
	if(mat[x][y]=='.' || mat[x][y]=='B')
	return true;
}
void bfs(int x,int y){

	queue< pair<int,int> > q;
	q.push({x,y});
	vis[x][y]=1;
	while(!q.empty()){
		pair<int,int > ele=q.front();
		q.pop();
		
		int a=ele.F,b=ele.S;
		for(auto i:dr){
			for(auto j:dc){
				if(isvalid(a+i,b+j) && abs(i)!=abs(j)){
					char direction;
					if(i==1 && j==0)
						direction='D';
					if(i==-1 && j==0)
						direction='U';
					if(j==1 && i==0)
						direction='R';
					if(j==-1 && i==0)
						direction='L';
					parent[{a+i,b+j}]={{a,b},direction};
					if(mat[a+i][b+j]=='B'){
						pair<int,int> end={a+i,b+j};
						while(1){
							path+=(parent[{end.F,end.S}].S);
							end=parent[{end.F,end.S}].F;
							if(end.F==start.F && end.S==start.S)break;

						}
						reverse(path.begin(),path.end());
						cout<<"YES\n";
						cout<<path.size()<<'\n';
						cout<<path;
						return;
					}
					vis[a+i][b+j]=1;
					q.push({a+i,b+j});

				}
			}
		}
	}
	cout<<"NO\n";
}
void solve()
{
	cin>>n>>m;
	for(int i=0;i<n;i++){
		f(j,0,m-1){
			cin>>mat[i][j];
			if(mat[i][j]=='A'){
				start={i,j};
			}
			
		}
	}
	bfs(start.F,start.S);
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}