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
	vi a(n);
	int prev=0;
	int mx=0,ans=-1,f=0;
	f(i,0,n-1){
		cin>>a[i];
		if(prev==0)prev=a[i];
		else if(prev!=a[i]){
			f=1;
		}
		if(a[i]>mx){
			mx=a[i];
			ans=i+1;
		}
	}
	if(f){
		f(i,0,n-1){
			if(i>0){
				if(a[i]==mx && a[i-1]!=mx){
					cout<<i+1<<'\n';
					return;
				}
			}
			if(a[i]==mx && a[i+1]!=mx){
				cout<<i+1<<'\n';
				return;
			}
		}
	}
	else
		cout<<-1<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}