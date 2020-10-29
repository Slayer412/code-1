#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int a[33][11];
int count(int x,int n,int i){
	if(x<=0){
		return 1;
	}
	if(a[i][n]>x)
		return 0;
	return count(x,n,i+1) + count(x-a[i][n],n,i+1);
}
void solve()
{
	int x,n;cin>>x>>n;
	memset(a,0,sizeof(a));
	for(int i=0;i<=10;i++)a[1][i]=1;
	for(int i=2;i<=32;i++){
		ll sq=i*i;
		for(int j=2;j<=10;j++){
			a[i][j]=sq;
			sq=sq*i;
			if(sq>1000)
				break;
		}
	}
	cout<<count(x,n,1)<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}