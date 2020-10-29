#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
ll findans(vll &a,ll sum,int n,ll total){
	if(n==0){
		return abs(total-sum);
	}
	return min(findans(a,sum+a[n-1],n-1,abs(total-a[n-1])),findans(a,sum,n-1,total));
}
void solve(){
	int n;cin>>n;
	ll sum=0;
	vll a(n);
	f(i,0,n-1){
		cin>>a[i];
		sum+=a[i];
	}
	ll diff=findans(a,0,n,sum);
	cout<<diff<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}