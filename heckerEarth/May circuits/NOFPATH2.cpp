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
void find(ll x,ll y){
	
}
void solve()
{
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>mp[i][j];
		}
	}
	ll prod=1;
	for(int i=1;i<=n;i++)
        {	prod*=mp[i][1];
            if(prod%X) dp[i][1] = 1LL;
            else
            prod=0,dp[i][1]=-1;
        }
        prod=1;
        for(int i=2;i<=m;i++)
        {	prod*=mp[1][i];
            if(prod%X) dp[1][i] = 1LL;
            else
            prod==0,dp[1][i]=-1;
        }
	ll prod=1;
	for(int i=2;i<=n;i++){
		for(int j=2;j<=m;j++){
			if(prod%X==0)
			continue;
			else
			dp[i][j]+=dp[i][j-1],dp[i][j]+=dp[i-1][j];
		}
	}
	
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

