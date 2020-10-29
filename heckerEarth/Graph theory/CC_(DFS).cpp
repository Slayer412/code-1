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
#define infi 1000000007;
const int N=1005;
int cnt=0,cc;
int mat[N][N],vis[N][N];
int bfs(int i,int j){
	queue< pair<int,int> >q;
	q.push({i,j});
	vis[i][j]=1;
	int cnt=1;
	while(!q.empty()){
		auto p=q.front();
		q.pop();
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;++j){
				if(!vis[p.F+i][p.S+j] && mat[i+p.F][p.S+j]==1){
					q.push({i+p.F,j+p.S});
					vis[p.F+i][p.S+j]=1;
					++cnt;
				}
			}
		}
	}
	return cnt;
}
void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
			vis[i][j]=0;
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!vis[i][j] && mat[i][j]==1){
			++cc;
			ans=max(ans,bfs(i,j));
			}
		}
	}
	ans=max(ans,cnt);
	cout<<cc<<" "<<ans<<'\n';
	cc=0;

}
int main(){
	int t;cin>>t;
	while(t--)
	solve();
	return 0;
}