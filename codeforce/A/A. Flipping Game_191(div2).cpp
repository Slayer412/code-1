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
	vi a(n);
	int one=0,ans=0;
	for(int i=0;i<n;i++)cin>>a[i],one+=(a[i]==1);
	if(one==n){
		cout<<n-1<<'\n';
		return;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			sum+=1;
			ans=max(ans,sum);
		}
		else
		sum-=1;
		if(sum<0)sum=0;
		
	}
	cout<<ans+one<<'\n';
	
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}