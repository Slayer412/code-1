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
	int a[n];
	int f[101]={0};
	f(i,0,n-1)cin>>a[i],f[a[i]]++;
	if(!f[0]){
		cout<<0<<'\n';
		return;
	}
	int sum=0;
	f(i,0,100){
		if(f[i]){
			--f[i];
		}
		else{
			sum=i;
			break;
		}
	}
	f(i,0,100){
		if(f[i])--f[i];
		else{
			cout<<sum+i<<'\n';
			return;
		}
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}