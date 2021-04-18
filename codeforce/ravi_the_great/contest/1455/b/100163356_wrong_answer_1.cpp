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
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;


void solve()
{
	ll s;cin>>s;
	double n=((double)(sqrt(1+8*s))-1.0)/2.0;
	int n1=(int)n;
	int n2=(int)n-1;
	int n3=(int)n+1;
	if(s==2){
		cout<<3<<endl;
		return;
	}
	
	ll sum1=((n1*(n1+1))/2);
	ll sum2=((n2*(n2+1))/2);
	ll sum3=((n3*(n3+1))/2);
	
	ll ans1,ans2,ans3;
	if(sum1>s){
		ans1=n1+sum1-s;
	}
	else
		ans1=n1+s-sum1;
	
	if(sum2>s){
		ans2=n2+sum2-s;
	}
	else
		ans2=n2+s-sum2;
	
	if(sum3>s)
		ans3=n3+sum3-s;
	else
		ans3=n3+s-sum3;
	cout<<min({ans1,ans2,ans3})<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}