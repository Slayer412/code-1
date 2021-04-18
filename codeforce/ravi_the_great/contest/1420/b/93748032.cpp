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
	vll a(n);
	ll bit[40]={0};
	f(i,0,n-1){
		cin>>a[i];
		bit[(int)(log2(a[i]))]+=1LL;
	}
	//cout<<bit[0]<<"\n";
	ll res=0;
	for(int i=0;i<40;i++){
		if(bit[i]>1){	
			res+=(bit[i]*(bit[i]-1LL))/2LL;
		}
	}
	//cout<<((ll)(100000)*(100000-1))/2LL<<'\n';
	cout<<res<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}