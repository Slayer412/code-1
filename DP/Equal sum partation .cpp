#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool subsetsum(vi &a,ll sum, int n){
	if(sum==0)
	return true;
	if(n==0 || sum<=0)
	return 0;
	subsetsum(a,sum-a[n-1],n-1);
	subsetsum(a,sum,n-1);
	if(sum==0)
	return true;
}
void solve()
{
	int n;cin>>n;
	vi a(n);
	ll sum=0;
	f(i,0,n-1)cin>>a[i],sum+=a[i];
	if(sum%2){
		cout<<"NO\n";
		return;
	}
	bool yes=subsetsum(a,sum/2,n);
	cout<<yes<<'n';
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}