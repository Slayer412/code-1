#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	int mat[n][n];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)mat[i][j]=0;
	int odd=1,even=2;
	for(int i=0;i<n;i++)
	mat[i][i]=odd,odd+=2;
	int fe=1;
	
	for(int i=1;i<n;i++){
		int jj=0;
		for(int j=i;j<n;j++){
		
			if(fe){
			mat[j][jj++]=even;
			even+=2;
			}
			else{
				mat[j][jj++]=odd;
				odd+=2;
			}
		}
		fe=1-fe;
	}
	fe=1;
	for(int i=1;i<n;i++){
		int jj=0;
		for(int j=i;j<n;j++){
		
			if(fe){
			mat[jj++][j]=even;
			even+=2;
			}
			else{
				mat[jj++][j]=odd;
				odd+=2;
			}
		}
		fe=1-fe;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)cout<<mat[i][j]<<" ";
		cout<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}