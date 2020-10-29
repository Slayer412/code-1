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
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int z=0,mxz=0;
	f(i,0,n-1){
		if(a[i]==0)
			++z;
		else{
			mxz=max(mxz,z);
			z=0;
		}
	}
	mxz=max(mxz,z);
	int mxz1=0;
	z=0;
	f(i,0,n-1){
		if(a[i]==0)
			++z;
		else {
			if(z<mxz)
			mxz1=max(mxz1,z);
			z=0;
		}
	}
	mxz1=max(mxz1,z);
	if(mxz==0 && mxz==0)cout<<"No\n";
	else if(mxz1==0){
		if(mxz%2)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	else{
		if((mxz+1)/2 >mxz1){
			cout<<"Yes\n";
		}
		else
			cout<<"No\n";
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}