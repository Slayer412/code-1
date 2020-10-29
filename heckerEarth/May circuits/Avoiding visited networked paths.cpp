#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
long long X=212072634227239451;
long long INF=1e18;
ll mp[1005][1005],dp[1005][1005];
ll prod=1;
ll cnt=0;
int n,m;
void find(ll x,ll y){
	cout<<++cnt<<' ';
	if((prod*mp[x][y])%X==0)
	return;
	cnt++;
	if(x==n && y==n)
	return ;
	if(x==n){
	if((prod*mp[x][y])%X){
	prod=(prod*mp[x][y])%X;
	find(x,y+1);
	}
	}
	if(y==m){
		if((prod*mp[x][y])%X){
		prod=(prod*mp[x][y])%X;
		find(x+1,y);
		}
	}
	
	if(x!=n && y!=m){
		if((prod*mp[x][y])%X){
		prod=(prod*mp[x][y])%X;
		find(x+1,y);
		find(x,y+1);
		}
	}
}
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>mp[i][j];
		}
	}
	if(mp[1][1]%X==0){
		cout<<0;
		return;
	}
	find(1,1);
	cout<<ceil((double)cnt/(m+n));
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

