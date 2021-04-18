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
void solve()
{
	int n;
	cin>>n;
	vi a(n+1);
	f(i,1,n)cin>>a[i];
	vi B(n+1);
	int cnt=2*n;
	for(int i=1;i<=n;i++){
		if(B[i]==0){
			if(B[a[i]]!=0)B[i]=B[a[i]];
			else{
				B[a[i]]=cnt;
				B[i]=cnt;
				--cnt;
			}
		}
	}
	f(i,1,n)cout<<B[i]<<" ";
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}