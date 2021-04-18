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
vector< string > mat(N);
vector<string > ans(N);
vector<vector<int> > vis(N,vector<int> (N,false));
int n,m;
bool isvalid(int i,int j){
	if(i<0 || i>=n || j<0 || j>=m)return 0;
	if(vis[i][j])return false;
	if(mat[i][j]!='.')return false;
	return true;

}
void solve()
{
	cin>>n>>m;
	f(i,0,n-1){
		cin>>mat[i];
	}
	f(i,0,n-1){
		f(j,0,m-1){
				if(mat[i][j]=='.'){
					mat[i][j]='B';
					vis[i][j]=1;
					if(isvalid(i+1,j))
						mat[i+1][j]='W',vis[i+1][j]=1;
					if(isvalid(i-1,j))
						mat[i-1][j]='W',vis[i-1][j]=1;
					if(isvalid(i,j+1))
						mat[i][j+1]='W',vis[i][j+1]=1;
					if(isvalid(i,j-1))
						mat[i][j-1]='W',vis[i][j-1]=1;	
				}
				if(mat[i][j]=='W'){
					// mat[i][j]='B';
					vis[i][j]=1;
					if(isvalid(i+1,j))
						mat[i+1][j]='B',vis[i+1][j]=1;
					if(isvalid(i-1,j))
						mat[i-1][j]='B',vis[i-1][j]=1;
					if(isvalid(i,j+1))
						mat[i][j+1]='B',vis[i][j+1]=1;
					if(isvalid(i,j-1))
						mat[i][j-1]='B',vis[i][j-1]=1;	
				}
				if(mat[i][j]=='B'){
					// mat[i][j]='B';
					vis[i][j]=1;
					if(isvalid(i+1,j))
						mat[i+1][j]='W',vis[i+1][j]=1;
					if(isvalid(i-1,j))
						mat[i-1][j]='W',vis[i-1][j]=1;
					if(isvalid(i,j+1))
						mat[i][j+1]='W',vis[i][j+1]=1;
					if(isvalid(i,j-1))
						mat[i][j-1]='W',vis[i][j-1]=1;	
				}
		}
	}
	f(i,0,n-1)cout<<mat[i]<<'\n';
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}