#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;
	cin>>n;
	if(n<=2){
		cout<<"NO SOLUTION";
		return;
	}
	int a[n][n];
	for(int i=0;i<n;i++)a[0][i]=i+1;
	int dig[n+1];
	for(int i=1;i<=n;i++){
		dig[i]=n-1;
	}
	int inx=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0)continue;
			if(dig[inx]==0)++inx;
			a[i][j]=inx,dig[inx]--;
			//cout<<a[i][j]<<" "<<i<<" "<<j;
		}
	}
	f(i,0,n-1){
		f(j,0,n-1)cout<<a[i][j]<<" ";
		cout<<'\n';
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}