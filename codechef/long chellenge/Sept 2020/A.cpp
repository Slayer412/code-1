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

void solve()
{	
	int n;cin>>n;
	vector< vector<int> > mat(n+1,vector<int>(n+1));	
	f(i,1,n){
		f(j,1,n){
			cin>>mat[i][j];
		}
	}
	int equal=1;
	int cnt=0;
	for(int i=n;i>=2;i--){
		for(int j=1;j<i;++j){
			if(equal){
				if(mat[i][j]!=(i-1)*n+j){
					equal^=1;
					++cnt;
					break;
				}
			}
			else{
				if(mat[i][j]==(i-1)*n+j){
					equal^=1;
					++cnt;
					break;
				}
			}
		}
	}
	cout<<cnt<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}