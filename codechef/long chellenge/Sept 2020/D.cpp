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
	ll n;cin>>n;
	ll sum=(n*(n+1LL))/2LL;
	if(n==1 || n==2){
		cout<<0<<endl;
		return;
	}
	if(n==3 || n==4 ){
		cout<<2<<endl;
		return;
	}
	if(sum%2){
		cout<<0<<endl;
		return;
	}
	ll s=sum/2;
    ll n1=((sqrt((1LL+4LL*sum)))-1LL)/2LL;
	ll s1=(n1*(n1+1LL))/2LL;
	if(s1==s){
		ll n2=n1-1;
		ll ans=min(n-(n1+1)+1,n1-1);
		ans+=(n1*(n1-1))/2;
		ans+=((n-n1)*(n-n1-1))/2;
		cout<<ans<<'\n';
		return;
	}
	ll n2=s-(s1-n1);
	cout<<n1<<" "<<n2<<'\n';
	if(n2>n1 && n2<=n){
		ll n3=s1+(n1+1)-s;
	//	cout<<n3<<'\n';
		cout<<min(n2-n1,n1-n3+1)<<'\n';
	}
	else{
		n2=s1+(n1+1)-s;
		cout<<min(n-n1,n1-n2)<<'\n';
	}
	
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}
//292893219