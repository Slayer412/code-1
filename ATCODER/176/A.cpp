#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
char s[1002][1002];
void solve()
{
	int n,m;cin>>n>>m;
	int x1,y1;cin>>x1>>y1;
	int x2,y2;cin>>x2>>y2;
	f(i,1,n){
		f(j,1,m){
			cin>>s[i][j];
		}
	}
	int x=x1,y=y1;
	int ans=0;
	while(x!=x2 && y!=y2){
		if(x>x2){
			if(s[max(1,x-1)][y]=='.')
				--x;
		}
		else{
			if(s[min(n,x+1)][y]=='.')
				++y;
		}
		if(y>y2){
			if(s[x][max(1,y-1)]=='.')--y;
		}
		else{
			if(s[x][min(y+1,m)]=='.')++y;
		}

			
		if(s[min(x+1,n)][y]=='#' && s[max(1,x-1)][y]=='#' && s[x][max(1,y-1)]=='#' && s[x][min(n,y+1)]=='#'){
			++ans;
			int f=0;
			if(x>x2){
				if(y>y2){
					for(int i=x;i>=max(1,x-2);--i){
						for(int j=y;j>=max(1,y-2),--j){
							if(s[i][j]=='.'){
									x=i,y=j,f=1;
									if(x==x2 && y==y2){
										cout<<ans<<'\n';
										return;
									}
								}
						}
					}
				}
				else{
					for(int i=x;i>=max(1,x-2);--i){
						for(int j=y;j<=min(m,y+2),++j){
							if(s[i][j]=='.'){
									x=i,y=j,f=1;
									if(x==x2 && y==y2){
										cout<<ans<<'\n';
										return;
									}
								}
						}
					}
				}
				if(f==0){
					cout<<-1<<'\n';
					return;
				}
			}
			else{

				if(y>y2){
					for(int i=x;i<=min(n,x+2);++i){
						for(int j=y;j>=max(1,y-2),--j){
								if(s[i][j]=='.'){
									x=i,y=j,f=1;
									if(x==x2 && y==y2){
										cout<<ans<<'\n';
										return;
									}
								}
							}
						}
					}
				}
				else{
					for(int i=x;i<=min(n,x+2);++i){
						for(int j=y;j<=min(n,y+2),++j){
							if(s[i][j]=='.'){
									x=i,y=j,f=1;
									if(x==x2 && y==y2){
										cout<<ans<<'\n';
										return;
									}
								}

						}
					}
				}
				if(f==0){
					cout<<-1<<'\n';
					return;
				}
			}

		}
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}