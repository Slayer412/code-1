#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,p;cin>>n>>p;
	vector< vector<int> > mat(n,vector<int>(n,0));
	
	f(i,0,n-1){
		f(j,0,n-1){
			int one;
			cout<<1<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<'\n';
			cin>>one;
			if(one==1)
			mat[i][j]=1;
			if(one==-1){
				exit(1);
			}
		}
	}
	cout<<2<<'\n';
	f(i,0,n-1){
		f(j,0,n-1){
			cout<<mat[i][j]<<' ';
		}
		cout<<'\n';
	}
	int x
	cin>>x;
	if(x==-1)
	exit(1);
	//cout<<one<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}