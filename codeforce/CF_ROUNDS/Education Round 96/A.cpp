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
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
		if(n%7==0){
			cout<<0<<" "<<0<<" "<<n/7<<'\n';
		}
		else if(n%5==0){
			cout<<0<<" "<<n/5<<" "<<0<<'\n';
		}
		else if(n%3==0){
			cout<<n/3<<" "<<0<<" "<<0<<'\n';
		}
		else{
			int three=0;
			while(1){
				if(n%5==0){
					cout<<three<<" "<<n/5<<" "<<0<<'\n';
					return;
				}
				if(n%7==0){	
					cout<<three<<" "<<"0 "<<n/7<<'\n';
					return;
				}
				n-=3;
				++three;
				if(n<0){
					cout<<-1<<'\n';
					return;
				}
			}
		}
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}