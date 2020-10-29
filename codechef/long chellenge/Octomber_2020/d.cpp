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
	ll n,x,p,k;
	cin>> n >> x >> p >>k ;
	vll a(n+1);
	f(i,1,n)cin>>a[i];
	sort(a.begin(),a.end());
	if(a[p]==x){
		cout<<0<<'\n';
	}
	else if((a[p]<x && p<k) || (k<p &&  a[p]>x)) {
		cout<<-1<<'\n';
	} 
	else if(p==k){
		int ind=0;
		if(a[p]>x){
			f(i,1,p){
				if(a[i]==x){
					ind=i;
				}
				if(a[i]>x) {
					ind=i-1;
					break;
				}
			}
			cout<<p-ind<<'\n';
		}
		else{
			ind=p;
			f(i,p,n){
				if(a[i]==x){
					ind=i;
					break;
				}
				if(a[i]>x){
					ind=i;
					break;
				}
			}
			if(a[n]<x)ind=n+1;
			cout<<ind-p<<'\n';
		}
	}
	else{
		if(p<k){
			int ind=0;
			if(a[p]>x){
				f(i,1,p){
					if(a[i]==x){
						ind=i;
					}
					if(a[i]>x){
						ind=i-1;
						break;
					}
				}
				cout<<p-ind<<'\n';
				
			}
		}
		else{
			int ind=0;
			f(i,p,n){
				if(a[i]>=x){
					ind=i;
					break;
				}
			}
			if(a[n]<x)ind=n+1;
			cout<<ind-p<<'\n';
		}
	}	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}