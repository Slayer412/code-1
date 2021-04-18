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
int primes[305];
void fill(){
	int n=300;
	f(i,2,n)primes[i]=1;
	primes[0]=primes[1]=0;
	primes[2]=1;
	for(int i=2;i<=n;i++){
		if(primes[i])
		for(int j=i+i;j<=n;j+=i){
			primes[j]=0;
		}
	}
}
void solve()
{
	int n;cin>>n;
	std::vector<std::vector<int> > mat(n,vector<int> (n,1));
	if(primes[n]){
		f(i,0,n-1){
			f(j,0,n-1)cout<<mat[i][j];
			cout<<'\n';
		}
	}
	else{
		int x=n-1;
		int find=-1;
		for(int i=1;x+i<=304;i++){
			if(primes[x+i] && primes[i]==0){ 
				find=i;
				break;
			}
		}
		int find2=0;
		x=(n-1)*find;
		for(int i=1;find+i<=304;++i){
			if(primes[x+i] && !primes[i]){
				find2=i;
				break;
			}
		}
		f(i,0,n-1)mat[n-1][i]=find,mat[i][n-1]=find;
		mat[n-1][n-1]=find2;
		f(i,0,n-1){
			f(j,0,n-1){
				cout<<mat[i][j]<<" ";
			}
			cout<<'\n';
		}

	}
}
int main()
{	Fast;
	fill();
	int t;cin>>t;
	while(t--)
	solve();
}