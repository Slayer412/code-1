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
ll fact[1005];
const ll mod=1e9 + 7;
void fill(){
	fact[0]=fact[1]=1;
	for(ll i=2;i<=1000;i+=1LL){
		fact[i]=(fact[i-1]%mod*i)%mod;
	}
}
void solve()
{
	int n;cin>>n;
	int x,pos;cin>>x>>pos;
	vll ans(n),a(n);
	if(n/2==pos){
		cout<<fact[n-1]<<'\n';
		return;
	}
	int l=0,r=n-1;
	ll curr=x-1,curr2=n-x;
	int total=n-1;
	int f=1;
	ll res=1LL;
	while(l<r){
		int mid=(l+r)/2;
		if(pos>mid){
			res=(res*curr%mod)%mod;
			--curr;
			l=mid+1;
			--total;
		}
		else if(mid>pos){
			res=(res*curr2)%mod;
			--curr2;
			r=mid;
			--total;
		}
		else
			break;
	}
	for(ll i=total;i>=1;--i){
		res=(res*(ll)i)%mod;
	}
	cout<<res<<'\n';


}
int main()
{	Fast;
	fill();
	//int t;cin>>t;
	//while(t--)
	solve();
}