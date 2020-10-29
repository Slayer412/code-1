#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define mod 1000000007
using namespace std;
void solve()
{
	int n;cin>>n;
	vector< vector<int>  > mat(3,vector<int> (n));
	for(int i=0;i<3;i++){
		f(j,0,n-1){
			cin>>mat[i][j];
		}
	}
	vector< pair<ll,int> > a(n);
	for(int i=0;i<n;i++){
		a[i]={(mat[1][i]*mat[2][i])%mod,i};
	}
	sort(a.rbegin(),a.rend());
	ll mat2[3][n];
	for(int i=0;i<n;i++){
		mat2[0][i]=mat[0][a[i].S];
		mat2[1][i]=mat[1][a[i].S];
		mat2[2][i]=mat[2][a[i].S];
	}
	ll mul[n];
	mul[0]=(mat[1][0]*mat[2][0])%mod;
	for(int i=1;i<n;i++){
		mul[i]=(mul[i-1]%mod + (mat2[1][i]*mat2[2][i]) %mod)%mod;
	}
	ll ans=0;
	for(int i=0;i<n-1;i++){
		ans=(ans%mod + (mat2[0][i]*((mul[n-1]-mul[i] + mod)%mod))%mod)%mod;
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}