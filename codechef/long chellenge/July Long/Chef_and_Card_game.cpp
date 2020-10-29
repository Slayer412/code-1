#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n;cin>>n;
	ll a,b;
	ll suma=0,sumb=0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		int s1=0,s2=0;
		while(a){
			s1+=a%10;
			a/=10;
		}
		while(b){
			s2+=b%10;
			b/=10;
		}
		if(s1>s2){
			++suma;
		}
		else if(s1<s2){
			++sumb;
		}
		else
		++suma,++sumb;
		
	}
	if(suma>sumb){
			cout<<0<<' '<<suma<<'\n';
	}
	else if(sumb>suma){
			cout<<1<<' '<<sumb<<'\n';
	}
	else
		cout<<2<<' '<<suma<<'\n';
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}