#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

int isvalid(int i,int j,int n,int m){
	if(i<n && i>=0 && j<m && j>=0)
	return 1;
	return 0;
}
void solve()
{	int n,m;
	cin>>n>>m;
	char s[n][m];
	int g=0;
	f(i,0,n-1){
		f(j,0,m-1){
			cin>>s[i][j];
			if(s[i][j]=='G')
			++g;
		}
	}
	if(g==0){
		cout<<"Yes\n";
		return;
	}
	f(i,0,n-1){
		f(j,0,m-1){
			if(s[i][j]=='B'){
				if(isvalid(i,j+1,n,m) && s[i][j+1]=='.')
					s[i][j+1]='#';
				if(isvalid(i+1,j,n,m) && s[i+1][j]=='.')
					s[i+1][j]='#';
				if(isvalid(i,j-1,n,m) && s[i][j-1]=='.')
					s[i][j-1]='#';
				if(isvalid(i-1,j,n,m) && s[i-1][j]=='.')
					s[i-1][j]='#';
			}
		}
	}
	if(s[n-1][m-1]=='#'){
		cout<<"No\n";
		//cout<<"IND\n";
		return;
	}
	queue< pair<int,int> > que;
	int vis[n][m];
	f(i,0,n-1)f(j,0,m-1)vis[i][j]=0;
	que.push({n-1,m-1});
	while(que.empty()!=1){
		pair<int,int> p=que.front();
		que.pop();
		int i=p.first;
		int j=p.second;
		
		if(isvalid(i,j+1,n,m) && s[i][j+1]!='#' && vis[i][j+1]==0){
			que.push({i,j+1});
			vis[i][j+1]=1;
			
		}
		if(isvalid(i+1,j,n,m) && s[i+1][j]!='#' && vis[i+1][j]==0){
			que.push({i+1,j});
			vis[i+1][j]=1;
			
		}
		if(isvalid(i-1,j,n,m) && s[i-1][j]!='#' && vis[i-1][j]==0){
			que.push({i-1,j});
			vis[i-1][j]=1;
			
		}
		if(isvalid(i,j-1,n,m) && s[i][j-1]!='#' && vis[i][j-1]==0){
			que.push({i,j-1});
			vis[i][j-1]=1;
			
		}
		
	}
	int f=1;
	f(i,0,n-1){
		f(j,0,m-1){
			if(s[i][j]=='G'){
				if(vis[i][j]!=1)
				{
					f=0;
					break;
				}
			}
			if(s[i][j]=='B'){
				if(vis[i][j]==1){
					f=0;
					break;
				}
			}
		}
		if(!f)
		break;
	}
	if(f)
	cout<<"Yes\n";
	else
	cout<<"No\n";	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}