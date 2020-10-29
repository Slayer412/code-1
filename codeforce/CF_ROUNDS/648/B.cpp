#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n),b(n);
	f(i,0,n-1)cin>>a[i];
	f(i,0,n-1)cin>>b[i];
	int f=0;
	f(i,0,n-2){
		if(a[i]>a[i+1])
		f=1;
	}
	int z=0,o=0;
	f(i,0,n-1){
		if(b[i])
		o=1;
		else
		z=1;
	}
	if(!f){
		cout<<"Yes\n";
	}
	else if(z!=0 && o!=0){
		cout<<"Yes\n";
	}
	else
	cout<<"No\n";
	
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}